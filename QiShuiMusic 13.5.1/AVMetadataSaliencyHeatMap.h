@interface AVMetadataSaliencyHeatMap : AVMetadataObject
@property (nonatomic) q bytesPerRow;
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) NSData heatMap;
- (void)dealloc;
- (long long)height;
- (long long)width;
- (id)copyWithZone:;
- (long long)bytesPerRow;
- (id)initDerivedMetadataObjectFromMetadataObject:withTransform:isVideoMirrored:rollAdjustment:;
- (id)initWithFigEmbeddedCaptureDeviceObjectDictionary:input:timeStamp:type:;
- (id)initWithHeatMap:width:height:bytesPerRow:time:duration:bounds:optionalInfoDict:originalMetadataObject:sourceCaptureInput:;
- (id)heatMap;
+ (id)saliencyHeatMapWithFigEmbeddedCaptureDeviceObjectDictionary:input:timeStamp:;
@end
