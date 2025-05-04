@interface AWEImageCountView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel labelView;
@property (nonatomic) UIView backgroundView;
@property (nonatomic) q imageCount;
- (void)setUpImageCountView:;
- (id)initWithFrame:withImageCount:;
- (void)updateImageCountView:;
- (id)labelView;
- (void)setBackgroundView:;
- (long long)imageCount;
- (id)backgroundView;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (void)setLabelView:;
- (void)setImageCount:;
@end
