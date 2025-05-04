@interface AWEIMGreetingEmoticonCell : UICollectionViewCell
@property (nonatomic) UIImageView imageView;
- (void)stopAnimationIfNeed;
- (void)startAnimationIfNeed;
- (void)configWithGreetingEmoticonModel:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
+ (id)identifier;
@end
