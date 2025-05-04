@interface AWEPrivacyAlbumPermissionAlert : TSPKRuleEngineSubscriber
@property (nonatomic) double interval;
- (id)hanleEvent:;
- (BOOL)isAlbumAlertApi:;
- (void)permissionCheckBeforeHandleEvent;
- (double)interval;
- (void)setInterval:;
- (id)uniqueId;
- (void)showAlert;
+ (id)sharedInstance;
@end
