//Chamando os dados
const jsonData = require('./dados.json');

//Pegando somente os valores do dados.json
var valor = jsonData.map(function(item){
    return item.valor;
});

//Checando se o valor é diferente de 0
function checkValor(valor){
    if(valor != 0){
        return valor;
    } 
}


var valorFilter = valor.filter(checkValor);

//Extraindo o maior valor de faturamento
var maior = valorFilter.map(Number).reduce(function(a,b){
    return Math.max(a,b);
});

//Extraindo o menor valor de faturamento
var menor = valorFilter.map(Number).reduce(function(a,b){
    return Math.min(a,b);
})

//Imprimindo
console.log("O maior faturamento do mês foi: ",maior.toFixed(2));
console.log("O menor faturamento do mês foi: ",menor.toFixed(2));



//Calculando a soma de todos os faturamentos do mês
var soma = 0;
for(var i = 0; i < valorFilter.length; i++){
      soma += valorFilter[i];
}

//Calculando a média
var media = soma / valorFilter.length;

//Arredondando a média
var mediaArredondado = parseFloat(media.toFixed(2));

//Extraindo somente os valores que estão acima da média
function acimaDaMedia(valor){
    if(valor > mediaArredondado){
        return valor;
    }
}

//Filtrando os valores acima da média
var diasFaturados = valor.filter(acimaDaMedia);

//Imprimindo os valores
console.log("Em",diasFaturados.length ,"dias, você obteve o valor de faturamento acima da média");