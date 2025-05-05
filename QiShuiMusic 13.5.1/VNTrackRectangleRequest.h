@interface VNTrackRectangleRequest : VNTrackingRequest
- (id)initWithRectangleObservation:;
- (id)initWithRectangleObservation:completionHandler:;
+ (id)revisionAvailability;
+ (id)trackerTypeForRequestRevision:error:;
@end
