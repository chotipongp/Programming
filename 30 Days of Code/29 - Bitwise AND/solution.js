process.stdin.resume();
process.stdin.setEncoding('ascii');

var input_stdin = "";
var input_stdin_array = "";
var input_currentline = 0;

process.stdin.on('data', function (data) {
    input_stdin += data;
});

process.stdin.on('end', function () {
    input_stdin_array = input_stdin.split("\n");
    main();    
});

function readLine() {
    return input_stdin_array[input_currentline++];
}

/////////////// ignore above this line ////////////////////

function main() 
{
    var t = parseInt(readLine());
    for(var a0 = 0; a0 < t; a0++)
    {
        var n_temp = readLine().split(' ');
        var n = parseInt(n_temp[0]);
        var k = parseInt(n_temp[1]);
        
        let maxAB = 0
        for(let i=1; i<n; ++i)
        {
            for(let j=i+1; j<=n; ++j)
            {
                let auxAB = i&j
                
                if(auxAB>maxAB && auxAB<k)
                {
                   maxAB = auxAB
                }
            }
        }
        
        console.log(maxAB)
    }
}
