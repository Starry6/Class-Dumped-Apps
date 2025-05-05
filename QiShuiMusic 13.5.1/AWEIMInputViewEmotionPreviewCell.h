@interface AWEIMInputViewEmotionPreviewCell : UICollectionViewCell
@property (nonatomic) YYAnimatedImageView firstImageView;
@property (nonatomic) YYAnimatedImageView secondImageView;
- (void)configWithPath:;
- (id)secondImageView;
- (id)firstImageView;
- (void)hideEmotionCompletion:;
- (void)setFirstImageView:;
- (void)setSecondImageView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)identifier;
@end
