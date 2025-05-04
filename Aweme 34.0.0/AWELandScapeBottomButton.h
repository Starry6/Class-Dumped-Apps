@interface AWELandScapeBottomButton : UIButton
@property (nonatomic) UILabel countLabel;
@property (nonatomic) UIImageView image;
- (void)setUI;
- (void)playResumeAnimation;
- (void)updateCountLabel:;
- (id)image;
- (void)setImage:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (double)currentScale;
- (id)countLabel;
- (void)setCountLabel:;
- (void)updateImage:;
- (void)playAnimation;
@end
