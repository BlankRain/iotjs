var felicia=require('Rx');
var y=felicia.love('me');

felicia.log(y);
felicia.log('helloworld');
var x=felicia.Rx.Observable.of([1,2,3]).subscribe(console.log);

felicia.Rx.Observable.range(1, 9) .bufferCount(3)
.subscribe(console.log);
// for(var i in x ){
//   console.log(i)
// }
