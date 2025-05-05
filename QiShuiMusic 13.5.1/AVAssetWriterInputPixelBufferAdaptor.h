@interface AVAssetWriterInputPixelBufferAdaptor : NSObject
@property (nonatomic) AVAssetWriterInput assetWriterInput;
@property (nonatomic) NSDictionary sourcePixelBufferAttributes;
@property (nonatomic) ^{__CVPixelBufferPool=} pixelBufferPool;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)addCallbackToCancelDuringDeallocation:;
- (void)dealloc;
- (void)declareKeyPathDependenciesWithRegistry:;
- (id)sourcePixelBufferAttributes;
- (id)pixelBufferPool;
- (BOOL)appendPixelBuffer:withPresentationTime:;
- (id)description;
- (id)initWithAssetWriterInput:sourcePixelBufferAttributes:;
- (id)assetWriterInput;
+ (id)assetWriterInputPixelBufferAdaptorWithAssetWriterInput:sourcePixelBufferAttributes:;
@end
