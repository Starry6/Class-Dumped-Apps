@interface SWSystemActivityProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)releaseAssertionID:;
- (id)createTimerWithIdentifier:;
- (unsigned long long)getMachContinuousKernelWakeTime;
- (id)declareSystemActivityWithName:;
+ (id)sharedProvider;
@end
