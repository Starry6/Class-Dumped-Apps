@interface AWESpecialCardTemplateCellViewController : AWEFeedCellViewController
@property (nonatomic) <AWEAwemePlayInteractionPlayDelegate><AWEAwemePlayInteractionPanelDelegate><AWEAwemePlayInteractionCommerceDelegate><AWEAwemePlayInteractionUpdateDelegate><AWEAwemePlayInteractionUIDisplayDelegate><AWESpecialCardTemplateInteractionViewControllerProtocol> templateInteractionController;
- (BOOL)shouldRespondSingleClick;
- (BOOL)shouldRespondDoubleClick;
- (id)createInteractionController;
- (void)setTemplateInteractionController:;
- (id)templateInteractionController;
- (void)play;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)reset;
- (void)stop;
- (void)pause;
- (void)pageDidDisappear:;
- (void)pageWillAppear:;
- (void)pageWillDisappear:;
@end
