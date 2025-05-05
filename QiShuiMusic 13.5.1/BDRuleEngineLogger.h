@interface BDRuleEngineLogger : NSObject
+ (BOOL)shouldLogWithLevel:block:;
+ (void)error:;
+ (void)debug:;
+ (void)info:;
+ (void)warn:;
@end
