@interface AWELongPressPanelFamiliarRecommendViewModel : AWELongPressPanelBaseViewModel
@property (nonatomic) Q familiarRecommendActionType;
- (BOOL)needShow;
- (void)trackRecommendVideoWithActionType:isForCancelEvent:;
- (void)trackUnloginClick;
- (void)trackFinishLoginClickIfNeeded:;
- (void)trackUnloginShow;
- (id)recommendAwemeParam;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (unsigned long long)familiarRecommendActionType;
- (void)setFamiliarRecommendActionType:;
- (void)configIcon;
- (void)recommendAweme;
- (void)cancelRecommendAweme;
+ (id)longPressPanelViewModel;
@end
