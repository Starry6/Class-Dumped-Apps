@interface AWENearbyTransformerAnimationView : UIView
@property (nonatomic) double topInset;
@property (nonatomic) UIImageView textImageView;
@property (nonatomic) NSMutableArray iconImageViews;
@property (nonatomic) double textImageOriginY;
@property (nonatomic) double iconImageOriginY;
- (void)__buildUI;
- (id)textImageView;
- (void)setTextImageView:;
- (id)initWithFrame:topInset:;
- (void)beginIconAnimationWithRelativeHeight:seconIconCompletion:completion:;
- (void)beginAnimationWithCompletion:;
- (void)setIconImageViews:;
- (void)__setUpDefaultConstraints;
- (id)iconImageViews;
- (void)setTextImageOriginY:;
- (void)setIconImageOriginY:;
- (double)textImageOriginY;
- (double)iconImageOriginY;
- (double)topInset;
- (void)setTopInset:;
- (void).cxx_destruct;
@end
