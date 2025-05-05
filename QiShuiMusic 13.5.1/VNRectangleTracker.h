@interface VNRectangleTracker : VNTracker
- (BOOL)isTracking;
- (void).cxx_destruct;
- (BOOL)reset:;
- (id)initWithOptions:error:;
- (id)setTrackedObjects:inFrame:error:;
- (id)trackInFrame:error:;
- (id)_parseInputObservations:imageBuffer:error:;
- (id)_convertCornerObservationsToRectangleObservation:error:;
+ (id)_trackingRectAroundPoint:trackingRectSize:;
+ (id)trackedCorners;
+ (Class)trackerObservationClass;
@end
