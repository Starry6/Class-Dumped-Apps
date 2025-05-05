@interface BDRuleEngineUtil : NSObject
+ (id)formatToJsonString:;
+ (id)formatToJsonString:option:;
+ (id)generateKeyForInput:withFilterKeys:;
+ (id)manualFormatToJsonString:;
@end
