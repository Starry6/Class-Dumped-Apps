@interface YYAnimatedImageView : UIImageView
@property (nonatomic) BOOL currentIsPlayingAnimation;
@property (nonatomic) BOOL autoPlayAnimatedImage;
@property (nonatomic) Q currentAnimatedImageIndex;
@property (nonatomic) NSString runloopMode;
@property (nonatomic) Q maxBufferSize;
@property (nonatomic) Q animationType;
- (BOOL)autoPlayAnimatedImage;
- (void)calcMaxBufferCount;
- (unsigned long long)currentAnimatedImageIndex;
- (unsigned long long)currentImageType;
- (BOOL)currentIsPlayingAnimation;
- (void)didMoved;
- (void)imageChanged;
- (void)resetAnimated;
- (void)setAutoPlayAnimatedImage:;
- (void)setContentsRect:forImage:;
- (void)setCurrentAnimatedImageIndex:;
- (void)setCurrentIsPlayingAnimation:;
- (void)setImage:withType:;
- (unsigned long long)animationType;
- (id)initWithImage:;
- (id)init;
- (void)dealloc;
- (BOOL)isAnimating;
- (void)didMoveToSuperview;
- (void)didEnterBackground:;
- (void)displayLayer:;
- (void)didReceiveMemoryWarning:;
- (void)setImage:;
- (id)runloopMode;
- (id)initWithCoder:;
- (void)setAnimationType:;
- (unsigned long long)maxBufferSize;
- (void)startAnimating;
- (id)initWithFrame:;
- (void)encodeWithCoder:;
- (void)stopAnimating;
- (void)step:;
- (void)setMaxBufferSize:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setHighlighted:;
- (id)initWithImage:highlightedImage:;
- (void)setRunloopMode:;
- (void)setHighlightedImage:;
- (void)setAnimationImages:;
- (void)setHighlightedAnimationImages:;
- (id)imageForType:;
+ (BOOL)automaticallyNotifiesObserversForKey:;
@end
