@interface AVCVideoFrame : NSObject
@property (nonatomic) ^{__CVBuffer=} pixelBuffer;
@property (nonatomic) ^{__CVBuffer=} depthPixelBuffer;
@property (nonatomic) NSData imageData;
@property (nonatomic) {?=qiIq} time;
@property (nonatomic) NSData effectsMetadata;
@property (nonatomic) float renderProcessTime;
- (void)setTime:;
- (void)setImageData:;
- (void)dealloc;
- (id)time;
- (id)imageData;
- (id)pixelBuffer;
- (id)delegate;
- (id)effectsMetadata;
- (void)setEffectsMetadata:;
- (void)setPixelBuffer:;
- (id)depthPixelBuffer;
- (id)initWithPixelBuffer:time:imageData:;
- (id)initWithPixelBuffer:depthPixelBuffer:time:imageData:delegate:;
- (void)setDepthPixelBuffer:;
- (float)renderProcessTime;
- (void)setRenderProcessTime:;
@end
