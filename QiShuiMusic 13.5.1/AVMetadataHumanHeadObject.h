@interface AVMetadataHumanHeadObject : AVMetadataObject
- (id)description;
- (id)copyWithZone:;
- (id)initDerivedMetadataObjectFromMetadataObject:withTransform:isVideoMirrored:rollAdjustment:;
- (id)initWithFigEmbeddedCaptureDeviceObjectDictionary:input:timeStamp:type:;
+ (id)humanHeadObjectWithFigEmbeddedCaptureDeviceObjectDictionary:input:timeStamp:;
@end
