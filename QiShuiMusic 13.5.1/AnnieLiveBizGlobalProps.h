@interface AnnieLiveBizGlobalProps : NSObject
+ (id)combineGlobalProps:originGlobalProps:puzzleContext:;
+ (id)combineGlobalProps:originGlobalProps:puzzleContext:routerParams:;
+ (id)generateJsSourceWithFuncName:str:;
+ (id)generateJsSourceWithPramName:dict:;
+ (id)getMixGlobalProps:context:;
@end
