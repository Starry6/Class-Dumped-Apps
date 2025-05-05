@interface CJPayNotSufficientFundsView : UIView
@property (nonatomic) CJPayStyleErrorLabel contentLabel;
@property (nonatomic) UIImageView iconImgView;
@property (nonatomic) @? iconClickBlock;
- (void)setIconImgView:;
- (id)calSize;
- (id)iconClickBlock;
- (id)iconImgView;
- (void)p_tapIncomePayAboutImageView;
- (void)setIconClickBlock:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)updateTitle:;
@end
