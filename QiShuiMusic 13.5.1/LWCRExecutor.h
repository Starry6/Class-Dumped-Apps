@interface LWCRExecutor : NSObject
- (BOOL)evaluateRequirements:withFacts:;
+ (id)executor;
@end
