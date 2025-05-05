@interface AVMetadataCatHeadObject : AVMetadataObject
- (id)description;
- (id)copyWithZone:;
- (id)initDerivedMetadataObjectFromMetadataObject:withTransform:isVideoMirrored:rollAdjustment:;
- (id)initWithFigEmbeddedCaptureDeviceObjectDictionary:input:timeStamp:type:;
+ (id)catHeadObjectWithFigEmbeddedCaptureDeviceObjectDictionary:input:timeStamp:;
@end
