var example_a = "dea";
var example_b = "caaxadeacaaaxdeaxcedaaa";

function find_permus(a,b){
    var temp_string = a;
    var permu_count = 0;

    for(var i=0; i<(b.length - (a.length-1)); i++){
        for(var j=0; j<a.length; j++){
            var index = temp_string.indexOf(b[i+j]);
            if( index !== -1){
                temp_string = remove_index(temp_string,index);
            }
        }
        if(temp_string.length === 0){
            permu_count++;
        }
        temp_string = a;
    }
    return permu_count;
}

function remove_index(s, index){
    var arr = s.split("");
    arr.splice(index,1);
    return arr.join("");
}

console.log(find_permus(example_a,example_b));
