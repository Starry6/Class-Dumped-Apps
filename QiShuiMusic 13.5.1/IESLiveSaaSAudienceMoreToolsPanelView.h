@interface IESLiveSaaSAudienceMoreToolsPanelView : UIView
@property (nonatomic) IESLiveSaaSAudienceMoreToolsStore store;
@property (nonatomic) UIView panelView;
@property (nonatomic) UIView accessView;
@property (nonatomic) <IESLiveSaaSPopupPanService> popupPanService;
@property (nonatomic) @? panelDidHideBlock;
- (id)popupPanService;
- (id)accessView;
- (void)hidePanelView;
- (id)initWithFrame:store:;
- (id)panelDidHideBlock;
- (id)panelView;
- (void)setAccessView:;
- (void)setPanelDidHideBlock:;
- (void)setPanelView:;
- (void)setPopupPanService:;
- (void)showPanelView;
- (void)showPanelViewFromBottom:;
- (void)setStore:;
- (void).cxx_destruct;
- (id)store;
- (void)buildView;
@end
