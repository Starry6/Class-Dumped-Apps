@interface AWEAdAttractionView : UIButton
@property (nonatomic) CAShapeLayer circleLayer1;
@property (nonatomic) CAShapeLayer circleLayer2;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) AWEURLModel url;
@property (nonatomic) @? showBlock;
- (id)showBlock;
- (void)setShowBlock:;
- (id)circleLayer1;
- (id)circleLayer2;
- (void)setCircleLayer1:;
- (void)setCircleLayer2:;
- (void)removeFromSuperview;
- (void)setUrl:;
- (void)setAvatarView:;
- (id)initWithFrame:;
- (id)avatarView;
- (void)startAnimation;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (void)reset;
- (void)layoutSubviews;
- (id)url;
- (void)stopAnimation;
+ (id)animationWithBeginTime:;
+ (id)animation;
+ (id)circle;
@end
