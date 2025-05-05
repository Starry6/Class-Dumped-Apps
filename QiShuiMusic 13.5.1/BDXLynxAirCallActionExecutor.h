@interface BDXLynxAirCallActionExecutor : NSObject
+ (id)_selectActionValueWithActionName:inContext:error:;
+ (id)actionCallHigherOrderFunc:arguments:inContext:error:;
+ (id)callActionByName:arguments:inContext:error:;
+ (id)callSetData:inContext:error:;
@end
