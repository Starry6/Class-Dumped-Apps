@interface PFAnimatedImage : NSObject
@property (nonatomic) PFFrameCache frameCache;
@property (nonatomic) q cacheStrategy;
@property (nonatomic) Q frameCount;
@property (nonatomic) Q loopCount;
@property (nonatomic) double duration;
@property (nonatomic) {CGSize=dd} pixelSize;
- (unsigned long long)frameCount;
- (id)pixelSize;
- (id)init;
- (void)dealloc;
- (id)initWithURL:;
- (id)initWithData:;
- (void).cxx_destruct;
- (double)duration;
- (unsigned long long)loopCount;
- (id)initWithURL:cachingStrategy:useGlobalDecodeQueue:;
- (id)initWithURL:cachingStrategy:;
- (id)initWithData:cachingStrategy:;
- (id)initWithImageSource:;
- (id)initWithImageSource:cachingStrategy:;
- (id)initWithImageSource:cachingStrategy:useGlobalDecodeQueue:;
- (double)frameDelayAtIndex:;
- (long long)cacheStrategy;
- (void)setCacheStrategy:;
- (void)_preloadDelayTimes;
- (id)frameCache;
@end
