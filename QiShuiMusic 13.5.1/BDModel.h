@interface BDModel : NSObject
+ (id)model:withJSON:;
+ (id)model:withDictonary:;
+ (id)model:withJSON:options:;
+ (id)toJSONDataWithModel:;
+ (id)toJSONObjectWithModel:;
+ (id)toJSONStringWithModel:;
@end
