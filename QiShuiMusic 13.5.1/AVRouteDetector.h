@interface AVRouteDetector : NSObject
@property (nonatomic) BOOL routeDetectionEnabled;
@property (nonatomic) BOOL multipleRoutesDetected;
@property (nonatomic) BOOL detectsCustomRoutes;
- (id)init;
- (void)dealloc;
- (void)_didEnterBackground;
- (BOOL)multipleRoutesDetected;
- (BOOL)detectsCustomRoutes;
- (BOOL)isRouteDetectionEnabled;
- (void)setRouteDetectionEnabled:;
- (void)setDetectsCustomRoutes:;
- (void)_updateMultipleRoutesDetected;
- (void)_updateRouteDetectionEnabled;
- (BOOL)_isAirPlayDevicePresenceDetected;
- (BOOL)_isCustomRoutePresenceDetected;
- (void)_didEnterForeground;
@end
