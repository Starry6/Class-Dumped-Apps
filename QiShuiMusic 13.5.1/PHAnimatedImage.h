@interface PHAnimatedImage : NSObject
@property (nonatomic) Q frameCount;
@property (nonatomic) Q loopCount;
@property (nonatomic) double duration;
@property (nonatomic) Q pixelWidth;
@property (nonatomic) Q pixelHeight;
@property (nonatomic) PFAnimatedImage pf_animatedImage;
- (unsigned long long)frameCount;
- (id)initWithURL:;
- (void).cxx_destruct;
- (double)duration;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (unsigned long long)loopCount;
- (id)initWithURL:cachingStrategy:useSharedDecoding:;
- (void)_initializePropertiesWithAnimatedImage:;
- (id)pf_animatedImage;
+ (long long)requestAnimatedImageWithURL:completion:;
+ (long long)requestAnimatedImageWithURL:options:completion:;
+ (void)cancelAnimatedImageRequest:;
@end
