@interface VKClassicGlobeCanvas : VKScreenCanvas
@property (nonatomic) @? sceneDidLoadCallback;
@property (nonatomic) <VKInteractiveMapDelegate> delegate;
@property (nonatomic) NSInteger mapType;
@property (nonatomic) BOOL trafficEnabled;
@property (nonatomic) NSInteger flyoverMode;
@property (nonatomic) VKGlobeCameraController globeCameraController;
@property (nonatomic) VKARCameraController arCameraController;
@property (nonatomic) BOOL flyoverAvailable;
@property (nonatomic) BOOL disableRoads;
@property (nonatomic) BOOL disableLabels;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray overlays;
@property (nonatomic) NSArray visibleTileSets;
- (id)annotationRectTest;
- (void)setMapType:;
- (void)setContentsScale:;
- (void)didBecomeInActive;
- (void)stopLoading;
- (void)didBecomeActive;
- (int)mapType;
- (id)consoleString:;
- (void)_update;
- (void)insertOverlay:belowOverlay:;
- (void)dealloc;
- (void)removeOverlay:;
- (void)transitionToTracking:mapMode:startLocation:startCourse:cameraController:pounceCompletionHandler:;
- (id)initWithMapEngine:inBackground:;
- (void)addOverlay:;
- (void)setDelegate:;
- (id)annotationCoordinateTest;
- (BOOL)isPointValidForGesturing:;
- (void)insertOverlay:aboveOverlay:;
- (void)setTrafficEnabled:;
- (void)setCamera:;
- (void)resumeFlyoverTourAnimation;
- (void)stopAnimations;
- (BOOL)shouldHideOffscreenSelectedAnnotation;
- (void)stopSnappingAnimations;
- (id)attributionsForCurrentRegion;
- (id)convertMapPointToPoint:;
- (void)updateWithTimestamp:withContext:;
- (void)resourceManifestManagerWillChangeActiveTileGroup:;
- (id)overlays;
- (id)delegate;
- (void)pauseFlyoverTourAnimation;
- (id)convertPointToCoordinate:;
- (void)debugHighlightObjectAtPoint:highlightTarget:;
- (id)convertCoordinateToCameraModelPoint:;
- (void).cxx_destruct;
- (id)visibleTileSets;
- (id)convertPointToMapPoint:;
- (void)resourceManifestManagerDidChangeActiveTileGroup:;
- (void)willDealloc;
- (void)transferStateFromCanvas:;
- (BOOL)trafficEnabled;
- (void)setMapType:animated:;
- (id)detailedDescription;
- (void)didPresent;
- (id).cxx_construct;
- (id)convertCoordinateToPoint:;
- (void)updateCameraForFrameResize;
- (void)prepareFlyoverAnimation:completion:;
- (void)stopFlyoverAnimation;
- (id)overlayContainer;
- (id)_styleManager;
- (int)flyoverMode;
- (void)setDisableRoads:;
- (void)setDisableLabels:;
- (void)enterARSessionAtCoordinate:;
- (void)exitARSession;
- (void)didReceiveMemoryWarning:beAggressive:;
- (BOOL)useNewRenderPath;
- (id)arCameraController;
- (void)_reloadStylesheet;
- (id)_clientStyleState;
- (id)_centerScreenPoint;
- (id)createFlyoverPreTourAnimation:duration:;
- (void)startFlyoverAnimation:animateToStart:labelChanged:stateChange:;
- (void)startFlyoverTourAnimation:animateToStart:labelChanged:stateChange:;
- (id)convertPointToCoordinateOnSphere:;
- (void)_updateDebugSettings;
- (void)waitForLoading;
- (void)setupMapScene;
- (void)enableFlyoverStatistics;
- (void)disableFlyoverStatistics;
- (void)resetFlyoverStatistics;
- (id)flyoverStatistics;
- (void)enableTileAnalytics;
- (void)disableTileAnalytics;
- (void)_setDefaultFov:;
- (BOOL)flyoverAvailable;
- (id)sceneDidLoadCallback;
- (void)setSceneDidLoadCallback:;
- (id)globeCameraController;
- (BOOL)disableRoads;
- (BOOL)disableLabels;
+ (BOOL)supportsMapType:scale:;
@end
