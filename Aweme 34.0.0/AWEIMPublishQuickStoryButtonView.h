@interface AWEIMPublishQuickStoryButtonView : UIView
@property (nonatomic) UIButton publishButton;
@property (nonatomic) UIButton gotoEditButton;
@property (nonatomic) <AWEIMPublishQuickStoryButtonViewDelegate> delegate;
- (void)p_setup;
- (id)publishButton;
- (void)setPublishButton:;
- (void)p_setupSubviews;
- (void)updatePublishButtonTitle:gotoEditButtonTitle:;
- (void)hideGotoEditButton;
- (id)gotoEditButton;
- (void)p_updateLayoutWithShowGotoEditButton:;
- (void)didClicPublishButton:;
- (void)didClickGotoEditButton:;
- (void)showGotoEditButton;
- (void)setGotoEditButton:;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
