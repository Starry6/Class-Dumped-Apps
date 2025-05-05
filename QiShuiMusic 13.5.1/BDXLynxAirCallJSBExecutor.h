@interface BDXLynxAirCallJSBExecutor : NSObject
+ (id)actionCallJSB:actionValue:arguments:inContext:error:;
+ (id)callJSBSync:rawData:inContext:error:;
+ (id)postprocessCallback:usingResult:inContext:error:;
@end
