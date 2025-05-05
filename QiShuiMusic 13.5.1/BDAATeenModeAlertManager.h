@interface BDAATeenModeAlertManager : NSObject
@property (nonatomic) BOOL isAlertShowing;
- (void)forceShowTeenModeAlert;
- (BOOL)isAlertShowing;
- (id)lastTimestampKey;
- (BOOL)p_isTimeToShowAlert;
- (void)setIsAlertShowing:;
- (BOOL)shouldShowTeenModeAlert;
- (void)showTeenModeAlertIfNeed;
- (id)init;
- (void)appDidBecomeActive:;
+ (id)sharedInstance;
@end
