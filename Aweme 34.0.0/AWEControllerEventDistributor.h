@interface AWEControllerEventDistributor : NSObject
- (void)dispatchEvent:invocation:;
- (void)p_log:selectorName:startTime:endTime:;
- (void)dispatchEvent:selector:execBlock:;
@end
