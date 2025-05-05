@interface AVMetadataSalientObject : AVMetadataObject
@property (nonatomic) q objectID;
- (long long)objectID;
- (id)description;
- (id)copyWithZone:;
- (id)initDerivedMetadataObjectFromMetadataObject:withTransform:isVideoMirrored:rollAdjustment:;
- (id)initWithFigEmbeddedCaptureDeviceObjectDictionary:input:timeStamp:type:;
- (id)initWithObjectID:time:duration:bounds:;
- (id)initWithObjectID:time:duration:bounds:optionalInfoDict:originalMetadataObject:sourceCaptureInput:;
+ (id)salientObjectWithFigEmbeddedCaptureDeviceObjectDictionary:input:timeStamp:;
@end
