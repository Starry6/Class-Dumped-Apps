@interface VKMapAnnotationTrackingCameraController : VKAnnotationTrackingCameraController
- (void)setEdgeInsets:;
- (void)updateFramerate;
- (void)_goToAnnotationAnimated:duration:timingFunction:isInitial:;
- (void)_rotateToHeadingAnimated:duration:;
- (double)_minTrackingCameraDistance:;
- (id)_effectiveEdgeInsets;
- (double)_zoomLevelForCameraPosition:;
@end
