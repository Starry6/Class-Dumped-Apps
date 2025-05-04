@interface AWEDYMainModuleService : AWEMainModuleService
- (void)markShareTokenAppLaunchForSchemaOrNotification;
- (void)getSchemeFromShareToken;
- (void)feedPlayStatusDidChangeForItem:isPlaying:isFromFeed:loop:;
- (void)transToMediumDetailWithParams:;
- (id)campaignKPopupManager;
- (void)refreshNotificationContactButton;
- (BOOL)needDelayDid;
@end
