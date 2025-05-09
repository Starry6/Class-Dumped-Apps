@interface BUGifImageView : UIImageView
@property (nonatomic) CADisplayLink displayLink;
@property (nonatomic) BUGifImage gifImage;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) BOOL repeats;
@property (nonatomic) @? completionHandler;
@property (nonatomic) q currentPlayIndex;
@property (nonatomic) BOOL delayDuration;
- (long long)currentPlayIndex;
- (BOOL)delayDuration;
- (void)displayImage:;
- (id)gifImage;
- (void)setCurrentPlayIndex:;
- (void)setDelayDuration:;
- (void)setGifImage:;
- (id)displayLink;
- (void)setDisplayLink:;
- (void)removeFromSuperview;
- (id)initWithImage:;
- (void)setRepeats:;
- (void)dealloc;
- (BOOL)repeats;
- (void)setStartTime:;
- (void)commonInit;
- (void)setCompletionHandler:;
- (void)setImage:;
- (id)initWithCoder:;
- (double)startTime;
- (void)setDuration:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)endAnimation;
- (id)initWithImage:highlightedImage:;
- (double)duration;
- (id)completionHandler;
- (void)beginAnimation;
@end
