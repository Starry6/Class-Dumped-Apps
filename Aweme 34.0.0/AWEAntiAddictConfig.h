@interface AWEAntiAddictConfig : NSObject
@property (nonatomic) BOOL isMaskShowing;
@property (nonatomic) BOOL isHalfAlertShowing;
@property (nonatomic) BOOL isTimeLockShowing;
@property (nonatomic) AWEAntiAddictRemindLaterModel sleepRemindLaterModel;
- (BOOL)isMaskShowing;
- (void)setIsMaskShowing:;
- (BOOL)isHalfAlertShowing;
- (void)setIsHalfAlertShowing:;
- (BOOL)isTimeLockShowing;
- (void)setIsTimeLockShowing:;
- (id)sleepRemindLaterModel;
- (void)setSleepRemindLaterModel:;
- (id)init;
- (void).cxx_destruct;
+ (id)defaultRestMaskMainTitle;
+ (id)defaultRestMaskSubTitle;
+ (id)defaultSleepMaskMainTitle;
+ (id)defaultSleepMaskSubTitle;
+ (id)defaultRestMaskEnterText;
+ (id)defaultSleepMaskEnterText;
+ (id)defaultRestMaskExitText;
+ (id)defaultSleepMaskExitText;
+ (id)defaultSleepMaskLaterRemindText;
+ (id)sharedInstance;
@end
