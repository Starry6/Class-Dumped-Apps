@interface AWEBottomTipManager : NSObject
@property (nonatomic) AWESupernatantView superNatant;
@property (nonatomic) AWEIMBottomTipsContainerView bottomBarContainer;
- (id)aAWEPadModuleAdapter;
- (void)showToastTip:tipType:shareModels:onTap:dismissed:;
- (void)showNewStyleShareToastWithTitle:tips:shareModels:onTap:dismissed:;
- (void)showToastTip:tipType:shareModels:containerView:onTap:dismissed:;
- (void)showNewStyleShareToastWithTitle:tips:shareModels:containerView:onTap:dismissed:;
- (void)showNewStyleShareToastWithTitle:tips:shareModels:containerView:onTap:dismissed:willToastShowAction:;
- (void)showNewStyleShareToastWithTitle:tips:shareModels:containerView:confirmTips:trackEvent:onConfirm:dismissed:;
- (void)showNewStyleShareToastWithTitle:tips:shareModels:containerView:confirmTips:trackEvent:onConfirm:dismissed:willToastShowAction:;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)superNatant;
- (id)bottomBarContainer;
- (void)setSuperNatant:;
- (void)__showNewStyleShareToastWithTitle:tips:shareModels:containerView:onTap:confirmTips:trackEvent:onConfirm:dismissed:willToastShowAction:;
- (void)__showNewStyleShareToastWithTitle:tips:tagText:shareModels:containerView:onTap:confirmTips:trackEvent:onConfirm:dismissed:willToastShowAction:;
- (BOOL)__hasUnnormalShareWithShareModels:;
- (void)setBottomBarContainer:;
- (void)showNewStyleShareToastWithTitle:tips:tagText:shareModels:containerView:onTap:dismissed:willToastShowAction:;
- (void).cxx_destruct;
- (void)dismissTip;
+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (BOOL)p_shouldUseTabBarHeightToLayoutWithView:topVC:;
+ (id)sharedInstance;
@end
