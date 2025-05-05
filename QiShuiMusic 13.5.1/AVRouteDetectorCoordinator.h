@interface AVRouteDetectorCoordinator : NSObject
@property (nonatomic) BOOL routeDetectionEnabled;
@property (nonatomic) BOOL multipleRoutesDetected;
- (void)dealloc;
- (BOOL)multipleRoutesDetected;
- (BOOL)isRouteDetectionEnabled;
- (void)setRouteDetectionEnabled:;
+ (BOOL)multipleRoutesDetected;
+ (id)routeDetectorCoordinatorQueue;
+ (id)sharedSystemRouteDetector;
+ (void)beginDetectingRoutes;
+ (void)endDetectingRoutes;
+ (void)updateMultipleRoutesDetected;
+ (void)setMultipleRoutesDetected:;
@end
