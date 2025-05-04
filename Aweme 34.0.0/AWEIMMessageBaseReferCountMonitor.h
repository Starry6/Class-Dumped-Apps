@interface AWEIMMessageBaseReferCountMonitor : NSObject
@property (nonatomic) q referenceCount;
- (BOOL)isExistAliveMessageBaseVC;
- (void)referenceCountSub;
- (void)referenceCountAdd;
- (long long)referenceCount;
- (void)setReferenceCount:;
+ (id)sharedInstance;
@end
