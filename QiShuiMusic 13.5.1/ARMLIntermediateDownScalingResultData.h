@interface ARMLIntermediateDownScalingResultData : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) ^{__CVBuffer=} pixelBuffer;
@property (nonatomic) ARImageData originalImageData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)pixelBuffer;
- (void).cxx_destruct;
- (double)timestamp;
- (BOOL)isEqual:;
- (id)originalImageData;
- (id)initWithPixelBuffer:timestamp:originalImageData:;
@end
