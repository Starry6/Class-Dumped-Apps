@interface BDUPCUtility : NSObject
+ (id)customBundle;
+ (void)cycleTask:timeoutBlock:;
+ (void)cycleTask:timeoutBlock:interval:intervalBlock:;
+ (id)getConfigWithUrlString:;
+ (void)loopTask:cycleBlock:interval:intervalBlock:when:;
+ (id)topVisibleWindow;
+ (id)imageWithName:;
+ (double)currentTimestamp;
+ (id)resourceBundle;
+ (id)MD5:;
@end
