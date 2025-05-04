@interface AWEIMCompanyCollectInfoContentComponent : AWEIMFlexComponent
@property (nonatomic) NSDate lastClickTimeDate;
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)cellVisibleLifeCycleChanged:;
- (void)cellWillDisplay:;
- (void)p_createPresenter;
- (void)p_updateViewModel;
- (void)p_showInactiveEnterpriseInstantMessageCardToast;
- (void)p_updatePresenterSize:;
- (void)p_trackLoadViewTimeWithSuccess:duration:;
- (void)p_didRegisterLynxContextWithSchema:;
- (void)p_trackHitTest;
- (id)lastClickTimeDate;
- (void)setLastClickTimeDate:;
- (id)displayMessage;
- (void)setScene:;
- (id)message;
- (long long)scene;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
