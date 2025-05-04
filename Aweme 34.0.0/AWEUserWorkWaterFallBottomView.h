@interface AWEUserWorkWaterFallBottomView : UIView
@property (nonatomic) UILabel dateLabel;
@property (nonatomic) UILabel countLabel;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UIButton iconCountActionBtn;
@property (nonatomic) @? tapActionBlock;
- (id)tapActionBlock;
- (void)setTapActionBlock:;
- (void)setCountStringWith:;
- (void)setIconWith:;
- (void)setDateStringWith:;
- (id)iconCountActionBtn;
- (void)iconCountActionBtnTapped:;
- (void)setIconCountActionBtn:;
- (id)iconImageAdaptiveBigModeWith:;
- (id)likeIconSize;
- (double)countFontSizeAdaptiveBigMode;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)dateLabel;
- (void)setIconImageView:;
- (void)setDateLabel:;
- (void)setupSubviews;
- (id)countLabel;
- (void)setCountLabel:;
@end
