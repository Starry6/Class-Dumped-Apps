@interface AWEShowSFPendantManager : NSObject
@property (nonatomic) BOOL isIncentivePendantTimerOn;
- (BOOL)isIncentivePendantTimerOn;
- (void)setIsIncentivePendantTimerOn:;
+ (id)sharedInstance;
@end
