@interface AWECreateSubAccountGeneralNewView : AWECreateSubAccountBaseView
@property (nonatomic) UIView panHolderView;
@property (nonatomic) UIButton closeBtn;
- (id)closeBtn;
- (void)setCloseBtn:;
- (id)panHolderView;
- (void)setPanHolderView:;
- (id)addAccountBtn;
- (id)createAccountBtn;
- (void)addAccountBtnTapped;
- (void)createAccountBtnTapped;
- (void)setAddAccountBtn:;
- (void)setCreateAccountBtn:;
- (void)closeBtnTappped;
- (void).cxx_destruct;
- (void)setupSubviews;
@end
