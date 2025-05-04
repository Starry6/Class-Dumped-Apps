@interface AWEPlayInteractionVideoAbstractColletionViewCell : UICollectionViewCell
@property (nonatomic) YYLabel textLabel;
@property (nonatomic) LOTAnimationView lottieView;
@property (nonatomic) UIImageView iconImgView;
@property (nonatomic) BOOL isLongText;
- (id)lottieView;
- (void)setLottieView:;
- (void)configUI;
- (id)iconImgView;
- (void)setIconImgView:;
- (BOOL)isLongText;
- (void)setIsLongText:;
- (void)updateWithAttString:truncationToken:isLongText:path:;
- (id)textLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:;
- (void)setTextLabel:;
+ (id)identifier;
@end
