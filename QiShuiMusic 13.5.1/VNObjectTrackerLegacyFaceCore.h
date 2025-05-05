@interface VNObjectTrackerLegacyFaceCore : VNTracker
- (void).cxx_destruct;
- (BOOL)reset:;
- (id)initWithOptions:error:;
- (BOOL)isResettable;
- (id)setTrackedObjects:inFrame:error:;
- (id)trackInFrame:error:;
- (id)_detectFacesInImage:error:;
+ (id)_convertOptionsToFaceCoreExtractOptions:;
+ (id)_convertOptionsToFaceCoreDetectOptions:;
+ (id)_convertOptionsToFaceCoreSetupOptions:;
+ (Class)trackerObservationClass;
@end
