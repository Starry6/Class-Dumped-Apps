@interface ARMLImageDownScalingResultData : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) q rotationOfResultTensor;
@property (nonatomic) NSArray downScalingResults;
@property (nonatomic) ARImageData originalImageData;
@property (nonatomic) ARMLImageDownScalingResultData latestResizedUltraWideImageData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (double)timestamp;
- (BOOL)isEqual:;
- (id)originalImageData;
- (id)initWithResultDataArray:timestamp:rotationOfResultTensor:originalImageData:;
- (long long)rotationOfResultTensor;
- (id)downScalingResults;
- (id)latestResizedUltraWideImageData;
- (void)setLatestResizedUltraWideImageData:;
@end
