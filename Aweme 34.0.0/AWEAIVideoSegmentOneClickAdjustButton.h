@interface AWEAIVideoSegmentOneClickAdjustButton : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) @? didTapBlock;
- (void)p_tapAction;
- (void)setDidTapBlock:;
- (id)didTapBlock;
- (double)recommendWidthForHeight:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (id)imageView;
@end
