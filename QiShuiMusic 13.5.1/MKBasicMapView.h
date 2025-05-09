@interface MKBasicMapView : UIView
@property (nonatomic) VKMapView mapView;
@property (nonatomic) {UIEdgeInsets=dddd} edgeInsets;
@property (nonatomic) BOOL inBackground;
@property (nonatomic) BOOL rendersInBackground;
@property (nonatomic) BOOL hasRenderedSomething;
@property (nonatomic) double mapModeStartTime;
@property (nonatomic) double trafficStartTime;
@property (nonatomic) BOOL changingViewSize;
@property (nonatomic) BOOL inactive;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)convertCoordinate:toCameraModelPointToView:;
- (void)dealloc;
- (void)_didEnterBackground;
- (void)setFrame:;
- (void)_unregisterSceneNotifications;
- (void)_sceneDidEnterBackground:;
- (void)setTrafficStartTime:;
- (void)addCalloutSubview:;
- (BOOL)isPointValidForGesturing:;
- (id)mapView;
- (BOOL)isInBackground;
- (void)_updateStatsForTrafficEnabledTime:;
- (void)updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:;
- (void)setRendersInBackground:;
- (double)trafficStartTime;
- (id)initWithFrame:andGlobe:shouldRasterize:allowsAntialiasing:;
- (void)_updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:ignoreIfViewInWindow:;
- (id)edgeInsets;
- (void)setMapModeStartTime:;
- (double)calloutContainerCanvasScale;
- (void)_animateCanvasForBounds:;
- (void)_updateMapViewHidden;
- (void)_sceneWillEnterForeground:;
- (BOOL)isChangingViewSize;
- (BOOL)inactive;
- (void)_finishedSnapshot:;
- (BOOL)rendersInBackground;
- (void)setBounds:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)updateStatsForEnablingTraffic:;
- (void)willMoveToWindow:;
- (void)resourceManifestManagerDidChangeActiveTileGroup:;
- (void)_registerSceneNotifications;
- (void)setInactive:;
- (void)setHidden:;
- (id)calloutContainerCanvasSize;
- (double)mapModeStartTime;
- (BOOL)hasRenderedSomething;
- (void)_updateForCurrentScreen;
- (void)_updateBackgroundState;
- (id)initWithFrame:andGlobe:shouldRasterize:;
- (void)updateStatsForSwitchingToMapType:;
- (void)setHasRenderedSomething:;
- (void)updateStatsForTrafficEnabledTime;
- (id)convertCoordinate:toPointToView:;
- (void)_updateBackgroundState:;
- (id)convertPoint:toCoordinateFromView:;
@end
