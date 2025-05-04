@interface AWELiveCustomConfigImpl : NSObject
@property (nonatomic) NSError walletError;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isPersonalRecommendSwitchOn;
- (BOOL)isPushNotificationEnabled;
- (BOOL)livePush;
- (long long)whenToPush;
- (void)pushOpenType:;
- (void)updateSettingsWithFieldType:status:requestPage:errorBlock:successBlock:;
- (BOOL)isTeenMode;
- (BOOL)hasContactsPermission;
- (BOOL)shouldForbidWallet;
- (id)forbidWalletError;
- (BOOL)audienceAllowWatchNotInWifi:;
- (void)setAudienceAllowWatchNotInWifi:;
- (BOOL)isiPadLandscapeMode;
- (BOOL)isiPadAutoRotateMode;
- (void)needDisableHostScreenshot:;
- (BOOL)isEnableLiveVisitHistory;
- (id)walletError;
- (void)setWalletError:;
- (BOOL)enableRoomHandleRightSwipeGesture;
- (BOOL)isFTCMode;
- (void).cxx_destruct;
@end
