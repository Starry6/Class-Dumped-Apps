@interface DebugDrawer : NSObject
@property (nonatomic) CinematicFramingSessionOptions options;
@property (nonatomic) FrameUndistortionSession undistortionSession;
- (void)setOptions:;
- (void)dealloc;
- (void)registerTarget:;
- (id)options;
- (void).cxx_destruct;
- (id)initWithUndistortionSession:mode:;
- (void)registerFocusPoint:;
- (void)registerBackProjectedViewportQuadrilateral:;
- (void)registerForwardProjectedSubjectQuadrilateral:;
- (void)registerForwardProjectedSubjectOccupancyFraction:;
- (void)registerSubjectRect:;
- (void)registerTracks:;
- (void)registerDetections:;
- (void)registerCrop:;
- (void)registerDeadbandSubjects:;
- (void)registerDisplayRect:;
- (void)registerDeadband:;
- (void)registerIdealDeadband:;
- (void)drawRect:onto:color:;
- (void)drawDebugOnto:;
- (id)undistortionSession;
- (void)setUndistortionSession:;
@end
