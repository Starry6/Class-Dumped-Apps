@interface AWERecommendMeToOthersAlert : NSObject
@property (nonatomic) Q triggerScene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sheetDidClickMaskArea:;
- (void)sheetDidClickCloseButton:;
- (void)sheetDidDismiss:;
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (double)showTimeoutWithContext:;
- (BOOL)canShow;
- (void)showWithCloseCallback:;
- (void)onAlertCanceled;
- (void)setTriggerScene:;
- (unsigned long long)triggerScene;
- (id)trackScene;
- (void)didClickOpen;
- (void)didClickReject;
- (void)trackAlertEvent:;
- (BOOL)enableGuide;
- (id)content;
- (id)title;
+ (BOOL)satifiedInteval;
+ (void)updateAlertShowCounts;
+ (void)updateLastAlertShowDate;
+ (BOOL)satifiedShowConditions;
+ (BOOL)lessThanMaxCounts;
+ (BOOL)satifiedValueChangedInteval;
+ (id)lastAlertShowDate;
+ (long long)alertShowCounts;
+ (id)closeRecommendMeToOthersDate;
+ (void)updateCloseRecommendMeToOthersDate;
+ (void)resetStorage;
@end
