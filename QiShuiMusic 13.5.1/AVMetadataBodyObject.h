@interface AVMetadataBodyObject : AVMetadataObject
@property (nonatomic) q bodyID;
- (id)copyWithZone:;
- (id)initWithFigEmbeddedCaptureDeviceObjectDictionary:input:timeStamp:type:;
- (id)initWithType:bodyID:time:duration:bounds:optionalInfoDict:originalMetadataObject:sourceCaptureInput:;
- (id)initDerivedMetadataObjectFromMetadataObject:withTransform:isVideoMirrored:rollAdjustment:type:bodyID:;
- (long long)bodyID;
@end
