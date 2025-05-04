@interface AWECoverEditorTextReloadView : UIView
@property (nonatomic) UILabel hintLabel;
@property (nonatomic) UIButton reloadBtn;
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) <AWECoverEditorTextReloadViewDelegate> delegate;
- (id)reloadBtn;
- (void)setReloadBtn:;
- (void)reloadData;
- (id)init;
- (id)delegate;
- (void)setLoadingView:;
- (id)loadingView;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupUI;
- (id)hintLabel;
- (void)setHintLabel:;
- (void)showLoadingView;
- (void)hideLoadingView;
@end
