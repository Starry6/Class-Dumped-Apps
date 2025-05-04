@interface AWEUserEventTracker : NSObject
+ (void)trackWithInfo:;
+ (void)trackWithLabel:;
+ (id)platformString:;
+ (void)trackWithEventName:withParams:needStagingFlag:;
+ (void)sloLoginMonitorWithEventName:params:error:;
@end
