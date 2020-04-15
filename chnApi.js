var addon = require('bindings')('chnApi');


console.log('test napi.h start');

var obj = new addon.MyObject(10);
console.log( obj.plusOne() ); // 11
console.log( obj.multiply().value() ); // 11
console.log( obj.multiply(10).value() ); // 110
var newobj = obj.multiply(-1);
console.log( newobj.value() ); // -11
console.log( obj === newobj ); // false

console.log( 'get math' ); // false
console.log( newobj.getGameBase() );//11
console.log( obj.getGameBase() );//11

//抓API版本
console.log( obj.getApiVersion() );//10
//新玩家，傳入 新BUF資料給機率。此時會抓到機率版本
console.log( obj.initNewUser() );//10
//抓機率版本
console.log( obj.getMathVersion() );//10