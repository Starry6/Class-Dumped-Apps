@interface AWEPaySKMAmountInputContainer : UIView
@property (nonatomic) AWEPayNumberInputView inputView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel prefixFlag;
@property (nonatomic) UILabel flagView;
@property (nonatomic) @? didClickConfirmBtn;
@property (nonatomic) @? didChangeBlock;
- (id)didClickConfirmBtn;
- (void)setDidClickConfirmBtn:;
- (void)setDidChangeBlock:;
- (id)didChangeBlock;
- (id)prefixFlag;
- (id)flagView;
- (id)getAmountUnitsStr:;
- (void)setAmountStr:;
- (void)setPrefixFlag:;
- (void)setFlagView:;
- (BOOL)becomeFirstResponder;
- (id)init;
- (BOOL)resignFirstResponder;
- (void)setInputView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)inputView;
- (void)setupUI;
@end
