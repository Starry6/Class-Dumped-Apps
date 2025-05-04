@interface AWERVLVMetaInfoCommentPanelViewModel : AWERVLVBasePanelViewModel
@property (nonatomic) AWERVLVMetaInfoCommentViewController metaCommentVC;
@property (nonatomic) UIView<AWECommentInputViewProtocol> commentInputView;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showInputView;
- (id)commentInputView;
- (void)setCommentInputView:;
- (id)panelVC;
- (void)trackCommentButtonClick:;
- (void)refreshModel:params:;
- (void)albumInfoDidLoad:;
- (id)panelID;
- (void)panelDidLoad;
- (id)rightPanelTitle;
- (id)metaCommentVC;
- (double)rightPanelTopPadding;
- (void)setMetaCommentVC:;
- (void)setModel:;
- (id)initWithContext:;
- (id)model;
- (void).cxx_destruct;
- (void)setupContext;
@end
