@interface VKDaVinciAnnotationTrackingCameraController : VKAnnotationTrackingCameraController
- (void)setEdgeInsets:;
- (void)updateFramerate;
- (void)_goToAnnotationAnimated:duration:timingFunction:isInitial:;
- (void)_rotateToHeadingAnimated:duration:;
- (double)_zoomLevelForDistance:;
- (double)_minTrackingCameraDistance:;
- (id)_centerCoordinate:forEdgeInsets:;
- (id)_scaledEdgeInsets:withCanvasSize:;
- (id)_effectiveEdgeInsets;
@end
