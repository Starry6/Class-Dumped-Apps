@interface VKGlobeAnnotationTrackingCameraController : VKAnnotationTrackingCameraController
@property (nonatomic) ^v globeView;
@property (nonatomic) VKCameraRegionRestriction regionRestriction;
- (void)setEdgeInsets:;
- (id)init;
- (void)dealloc;
- (void)setGlobeView:;
- (id)globeView;
- (void)setRegionRestriction:;
- (id)regionRestriction;
- (void).cxx_destruct;
- (void)_goToAnnotationAnimated:duration:timingFunction:isInitial:;
- (void)_rotateToHeadingAnimated:duration:;
- (id)_effectiveEdgeInsets;
- (id)_nonOffsetCenterCursor;
- (id)_centerCursor;
@end
