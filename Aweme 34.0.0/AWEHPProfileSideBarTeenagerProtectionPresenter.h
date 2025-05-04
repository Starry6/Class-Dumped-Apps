@interface AWEHPProfileSideBarTeenagerProtectionPresenter : AWELeftSideBarBasePresenter
@property (nonatomic) UIView<AWEHPSideBarStencilViewProtocol> containerView;
@property (nonatomic) AWEHPSideBarStencilViewDataModel dataModel;
- (id)initWithContext:extraData:;
- (void)leftSideBarPresenterOnReloadWithContext:extraData:;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:;
- (void)leftSideBarCellClick;
- (id)aAWEChildModeModuleServiceCommonAdapter;
- (id)aAWEUserCenterModuleServiceDOUYINHTSAdapter;
- (id)p_sideBarListCellDataModel:;
- (void)updateSideBarSubTitleIfNeed;
- (id)digitalWellbeingStatusString;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)dataModel;
- (void)setDataModel:;
+ (Class)aAWEChildModeModuleServiceCommonAdapterClass;
+ (Class)aAWEUserCenterModuleServiceDOUYINHTSAdapterClass;
@end
