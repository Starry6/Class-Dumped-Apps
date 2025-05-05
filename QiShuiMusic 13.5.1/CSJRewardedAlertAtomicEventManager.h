@interface CSJRewardedAlertAtomicEventManager : NSObject
+ (void)closeRewardWithParams:context:eventAction:;
+ (void)rewardAgainWithParams:context:eventAction:;
+ (void)rewardCancelWithParams:context:eventAction:;
+ (void)rewardContinueWithParams:context:eventAction:;
@end
