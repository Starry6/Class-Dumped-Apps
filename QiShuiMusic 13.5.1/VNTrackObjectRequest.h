@interface VNTrackObjectRequest : VNTrackingRequest
@property (nonatomic) {CGSize=dd} trackingFrameSizeInPixels;
- (id)newDefaultDetectorOptionsForRequestRevision:session:;
- (id)initWithDetectedObjectObservation:;
- (void)setTrackingLevel:;
- (id)_trackingLevelOptionFromTrackingLevelEnum;
- (id)initWithDetectedObjectObservation:completionHandler:;
- (void)setTrackingFrameSizeInPixels:;
- (id)trackingFrameSizeInPixels;
+ (id)defaultProcessingDeviceForRevision:;
+ (id)revisionAvailability;
+ (unsigned int)frameCVPixelBufferFormatForRequestRevision:;
+ (id)trackerTypeForRequestRevision:error:;
@end
