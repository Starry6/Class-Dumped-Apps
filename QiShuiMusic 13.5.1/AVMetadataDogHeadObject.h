@interface AVMetadataDogHeadObject : AVMetadataObject
- (id)description;
- (id)copyWithZone:;
- (id)initDerivedMetadataObjectFromMetadataObject:withTransform:isVideoMirrored:rollAdjustment:;
- (id)initWithFigEmbeddedCaptureDeviceObjectDictionary:input:timeStamp:type:;
+ (id)dogHeadObjectWithFigEmbeddedCaptureDeviceObjectDictionary:input:timeStamp:;
@end
