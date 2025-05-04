@interface AWEIMMessageEnterpriseMarketingToolsComponent : AWEIMComponentBase
@property (nonatomic) UIView<IESIMLoadingViewProtocol> businessLoadingView;
@property (nonatomic) BOOL isRequestingFlag;
@property (nonatomic) AWEIMChatPanelModel plusPanelItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (BOOL)canShowInPlusPanelWithContext:;
- (id)plusPanelItemModel;
- (void)p_onItemDidSelectedFromChatPanel;
- (id)plusPanelItem;
- (void)setPlusPanelItem:;
- (void)setBusinessLoadingView:;
- (id)businessLoadingView;
- (void)p_dismissBusinessLoadingView;
- (void)enterFECompanyComponent;
- (void)p_didStartEnterFECompanyComponent;
- (void)p_trackCompanyCompontent;
- (BOOL)isRequestingFlag;
- (void)setIsRequestingFlag:;
- (void)p_setupBusinessLoadingView;
- (void)fetchMarketingToolsResponseModelWithGroupChat:completion:;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
