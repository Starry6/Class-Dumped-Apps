@interface AVMetadataTrackedFacesObject : AVMetadataObject
@property (nonatomic) NSDictionary payload;
- (id)payload;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:;
- (id)initDerivedMetadataObjectFromMetadataObject:withTransform:isVideoMirrored:rollAdjustment:;
- (id)initWithTime:faceTrackingDictionary:input:;
+ (id)trackedFacesWithTime:faceTrackingDictionary:input:;
@end
