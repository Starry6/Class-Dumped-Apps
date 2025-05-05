@interface AVMetadataVideoPreviewHistogramObject : AVMetadataObject
@property (nonatomic) NSData lumaHistogramData;
@property (nonatomic) Q lumaHistogramBinCount;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:;
- (id)initDerivedMetadataObjectFromMetadataObject:withTransform:isVideoMirrored:rollAdjustment:;
- (id)initWithLumaHistogramData:time:sourceCaptureInput:;
- (unsigned long long)lumaHistogramBinCount;
- (id)lumaHistogramData;
+ (id)videoPreviewHistogramObjectWithLumaHistogramData:input:time:;
@end
