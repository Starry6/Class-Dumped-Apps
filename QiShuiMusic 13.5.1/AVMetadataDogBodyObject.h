@interface AVMetadataDogBodyObject : AVMetadataBodyObject
- (id)description;
- (id)copyWithZone:;
- (id)initDerivedMetadataObjectFromMetadataObject:withTransform:isVideoMirrored:rollAdjustment:;
- (id)initWithFigEmbeddedCaptureDeviceObjectDictionary:input:timeStamp:;
- (id)initWithBodyID:time:duration:bounds:;
- (id)initWithBodyID:time:duration:bounds:optionalInfoDict:originalMetadataObject:sourceCaptureInput:;
+ (id)dogBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:input:timeStamp:;
@end
