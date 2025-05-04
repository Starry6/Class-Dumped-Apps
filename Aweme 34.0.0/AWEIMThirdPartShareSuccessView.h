@interface AWEIMThirdPartShareSuccessView : UIView
@property (nonatomic) UIView baseView;
@property (nonatomic) UIButton successBtn;
@property (nonatomic) UILabel successLabel;
@property (nonatomic) NSMutableArray buttonArray;
- (void)showOnView:;
- (void)actionButtonClicked:;
- (void)setSuccessLabel:;
- (void)setButtonArray:;
- (id)buttonArray;
- (id)initWithActionButtonArray:;
- (id)successBtn;
- (id)successLabel;
- (void)setSuccessBtn:;
- (void)setBaseView:;
- (void)dismiss;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:;
- (void)layoutSubviews;
- (id)baseView;
- (void)applicationProtectedDataWillBecomeUnavailable:;
@end
