@interface HybridLogger : NSObject
- (void)logWithTag:level:message:;
- (void)logWithTag:level:str:;
+ (void)logWithTag:level:format:;
+ (id)sharedLoagger;
@end
