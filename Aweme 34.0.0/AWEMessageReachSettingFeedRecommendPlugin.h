@interface AWEMessageReachSettingFeedRecommendPlugin : NSObject
@property (nonatomic) <AWEMessageReachDialogConfigProtocol> config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)messageReach_setCommonDialogConfig:;
- (BOOL)messageReach_canShowCommonDialogWithModel:withContext:;
- (void)messageReach_didShowCommonDialogWithModel:withContext:;
- (BOOL)messageReach_shouldCancelAllOtherPendingAlertsWhenShowed:;
- (BOOL)messageReach_needInterceptorClickMaskWithModel:withContext:;
- (BOOL)messageReach_needInterceptorClickCloseButtonWithModel:withContext:;
- (BOOL)messageReach_needInterceptorClickActionButtonWithModel:withContext:withButtonDataModel:;
- (void)setConfig:;
- (id)config;
- (void).cxx_destruct;
@end
