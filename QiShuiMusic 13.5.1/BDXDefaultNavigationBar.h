@interface BDXDefaultNavigationBar : BDXNavigationBar
@property (nonatomic) BDXSchemaParam<BDXPageSchemaParamProtocol> param;
@property (nonatomic) UIViewController<BDXPageContainerProtocol> container;
@property (nonatomic) @? onLeftButtonClick;
@property (nonatomic) @? onRightButtonClick;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__showMorePanel;
- (void)attachToContainerWithParams:context:;
- (void)handleReloadButton:;
- (id)onLeftButtonClick;
- (void)onReportButtonClicked:;
- (id)onRightButtonClick;
- (void)onRightButtonClicked:;
- (void)onShareButtonClicked:;
- (void)setOnLeftButtonClick:;
- (void)setOnRightButtonClick:;
- (void)showCloseButton:;
- (void)updateRightButtonType:;
- (void)updateTitleColor:;
- (void)setContainer:;
- (id)container;
- (id)param;
- (void)setParam:;
- (void).cxx_destruct;
- (void)updateTitle:;
@end
