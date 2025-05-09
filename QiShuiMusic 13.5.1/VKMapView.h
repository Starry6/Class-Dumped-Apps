@interface VKMapView : CALayer
@property (nonatomic) VKMapCanvas mapCanvas;
@property (nonatomic) r^v mapEngine;
@property (nonatomic) double heading;
@property (nonatomic) BOOL virtualParallaxEnabled;
@property (nonatomic) BOOL shouldLoadFallbackTiles;
@property (nonatomic) BOOL shouldLoadMapMargin;
@property (nonatomic) <VKMapViewDelegate> mapDelegate;
@property (nonatomic) <VKMapViewCameraDelegate> cameraDelegate;
@property (nonatomic) BOOL staysCenteredDuringPinch;
@property (nonatomic) BOOL staysCenteredDuringRotation;
@property (nonatomic) CADisplay hostDisplay;
@property (nonatomic) BOOL isPitchable;
@property (nonatomic) BOOL pitched;
@property (nonatomic) BOOL fullyPitched;
@property (nonatomic) double minPitch;
@property (nonatomic) double maxPitch;
@property (nonatomic) BOOL canEnter3DMode;
@property (nonatomic) BOOL supportsGPUFrameCaptureToDestination;
@property (nonatomic) BOOL showingFlyover;
@property (nonatomic) BOOL canShowFlyover;
@property (nonatomic) BOOL trafficEnabled;
@property (nonatomic) BOOL trafficIncidentsEnabled;
@property (nonatomic) BOOL compressedBuildingsEnabled;
@property (nonatomic) q displayRate;
@property (nonatomic) q navigationDisplayRate;
@property (nonatomic) BOOL localizeLabels;
@property (nonatomic) q labelScaleFactor;
@property (nonatomic) NSInteger flyoverMode;
@property (nonatomic) NSInteger mapType;
@property (nonatomic) {?=CCCCB} mapDisplayStyle;
@property (nonatomic) float styleZOffsetScale;
@property (nonatomic) q targetDisplay;
@property (nonatomic) {?=B} vehicleState;
@property (nonatomic) q applicationUILayout;
@property (nonatomic) C mapKitUsage;
@property (nonatomic) C mapsUsage;
@property (nonatomic) BOOL labelMarkerSelectionEnabled;
@property (nonatomic) q shieldSize;
@property (nonatomic) q navigationShieldSize;
@property (nonatomic) q shieldIdiom;
@property (nonatomic) BOOL showsRoadLabels;
@property (nonatomic) BOOL showsRoadShields;
@property (nonatomic) BOOL showsPointLabels;
@property (nonatomic) BOOL showsPointsOfInterest;
@property (nonatomic) BOOL showsBuildings;
@property (nonatomic) BOOL showsVenues;
@property (nonatomic) BOOL loadMuninAvailability;
@property (nonatomic) q terrainMode;
@property (nonatomic) BOOL enableGlobe;
@property (nonatomic) BOOL enableRoundedBuildings;
@property (nonatomic) BOOL enableColorizedBuildings;
@property (nonatomic) BOOL enableBuildingHeights;
@property (nonatomic) BOOL enableAdvancedLighting;
@property (nonatomic) BOOL enableAdvancedWater;
@property (nonatomic) BOOL renderOverlayPolygons;
@property (nonatomic) BOOL renderInverseFills;
@property (nonatomic) BOOL isShowingCuratedElevatedGround;
@property (nonatomic) GEOPOICategoryFilter pointsOfInterestFilter;
@property (nonatomic) VKPuckAnimator userLocationAnimator;
@property (nonatomic) {VKEdgeInsets=ffff} edgeInsets;
@property (nonatomic) {VKEdgeInsets=ffff} fullyOccludedEdgeInsets;
@property (nonatomic) {VKEdgeInsets=ffff} labelEdgeInsets;
@property (nonatomic) GEOMapRegion mapRegion;
@property (nonatomic) GEOMapRegion mapRegionIgnoringEdgeInsets;
@property (nonatomic) double yaw;
@property (nonatomic) double presentationYaw;
@property (nonatomic) double pitch;
@property (nonatomic) double altitude;
@property (nonatomic) {?=ddd} centerCoordinate;
@property (nonatomic) BOOL gesturing;
@property (nonatomic) BOOL iconsShouldAlignToPixels;
@property (nonatomic) BOOL fullyDrawn;
@property (nonatomic) Q sceneState;
@property (nonatomic) BOOL trackingCameraShouldHandleGestures;
@property (nonatomic) double trackingZoomScale;
@property (nonatomic) {?=BdBB} annotationTrackingBehavior;
@property (nonatomic) q annotationTrackingHeadingAnimationDisplayRate;
@property (nonatomic) BOOL animatingToTrackAnnotation;
@property (nonatomic) BOOL canShowFlyoverAnimation;
@property (nonatomic) VKLabelMarker selectedLabelMarker;
@property (nonatomic) BOOL isMKRenderingSelectionBalloon;
@property (nonatomic) NSArray labelMarkers;
@property (nonatomic) VKPolylineOverlay focusedLabelsPolyline;
@property (nonatomic) BOOL rendersInBackground;
@property (nonatomic) BOOL debugLayoutContinuously;
@property (nonatomic) BOOL enableDebugLabelHighlighting;
@property (nonatomic) NSArray visibleTileSets;
@property (nonatomic) C applicationState;
@property (nonatomic) C displayedSearchResultsType;
@property (nonatomic) VKSceneConfiguration sceneConfiguration;
- (void)_mapkit_configureLabelSizesForContentSizeCategory:;
- (void)_mapkit_configureFromDefaults;
- (id)annotationRectTest;
- (id)mapEngine;
- (void)setCenterCoordinateDistanceRange:duration:timingFunction:;
- (void)setMapType:;
- (void)setContentsScale:;
- (double)yaw;
- (void)setEdgeInsets:;
- (double)presentationYaw;
- (void)setMapDisplayStyle:;
- (id)centerCoordinate;
- (int)mapType;
- (id)consoleString:;
- (double)altitude;
- (BOOL)isPitched;
- (void)_updateBackgroundColor;
- (void)runAnimation:;
- (void)updatePitchWithFocusPoint:translation:;
- (id)mapRegionIgnoringEdgeInsets;
- (void)setGesturing:;
- (void)setMapRegion:pitch:yaw:duration:timingCurve:completion:;
- (BOOL)cancelPendingMove;
- (void)insertOverlay:belowOverlay:;
- (void)dealloc;
- (void)setYaw:animated:;
- (void)removeOverlay:;
- (double)heading;
- (void)setShowsBuildings:;
- (BOOL)isFullyPitched;
- (void)exit3DMode;
- (BOOL)canEnter3DMode;
- (void)didReceiveMemoryWarning;
- (void)startPanningAtPoint:panAtStartPoint:;
- (BOOL)isAnimatingToTrackAnnotation;
- (void)goToTileX:Y:Z:tileSize:;
- (id)annotationTrackingBehavior;
- (double)maxPitch;
- (void)updatePanWithTranslation:;
- (double)minimumZoomLevelForTileSize:;
- (long long)annotationTrackingHeadingAnimationDisplayRate;
- (void)setAnnotationTrackingBehavior:;
- (void)zoom:withFocusPoint:completionHandler:;
- (id)mapRegion;
- (double)durationToAnimateToMapRegion:;
- (void)addOverlay:;
- (id)annotationCoordinateTest;
- (BOOL)tapAtPoint:;
- (BOOL)isPointValidForGesturing:;
- (void)insertOverlay:aboveOverlay:;
- (void)setApplicationState:;
- (void)setAnnotationTrackingHeadingAnimationDisplayRate:;
- (void)setTrafficEnabled:;
- (void)selectLabelMarker:completion:;
- (double)pitch;
- (BOOL)showsPointsOfInterest;
- (void)resumeFlyoverTourAnimation;
- (void)setCameraHorizontalOffset:duration:timingFunction:;
- (unsigned char)applicationState;
- (void)didEnterBackground;
- (void)setVirtualParallaxEnabled:;
- (void)panWithOffset:relativeToScreenPoint:animated:duration:completionHandler:;
- (BOOL)canZoomOutForTileSize:;
- (BOOL)shouldHideOffscreenSelectedAnnotation;
- (void)startTrackingAnnotation:trackHeading:animated:duration:timingFunction:;
- (void)setCurrentLocationText:;
- (void)startPitchingWithFocusPoint:;
- (void)stopTrackingAnnotation;
- (void)stopSnappingAnimations;
- (void)stopRotatingWithFocusPoint:;
- (void)startRotatingWithFocusPoint:;
- (void)setRegionRestriction:duration:timingFunction:;
- (void)setRendersInBackground:;
- (void)stopPinchingWithFocusPoint:;
- (double)zoomLevelAdjustmentForTileSize:;
- (id)attributionsForCurrentRegion;
- (void)updatePinchWithFocusPoint:oldFactor:newFactor:;
- (id)cameraDelegate;
- (void)startPinchingWithFocusPoint:;
- (id)edgeInsets;
- (void)populateDebugNode:withOptions:;
- (void)willEnterForeground;
- (void)stopPanningAtPoint:;
- (double)maximumZoomLevelForTileSize:;
- (void)stopPitchingWithFocusPoint:;
- (double)minPitch;
- (void)setMapRegion:pitch:yaw:;
- (void)setCanonicalSkyHeight:;
- (BOOL)canZoomInForTileSize:;
- (void)enter3DMode;
- (void)updateRotationWithFocusPoint:newValue:;
- (void)updatePitchWithFocusPoint:degrees:;
- (float)currentZoomLevel;
- (void)setNeedsLayout;
- (BOOL)rendersInBackground;
- (double)topDownMinimumZoomLevelForTileSize:;
- (void)setShowsPointsOfInterest:;
- (void)setRouteUserOffset:;
- (void)setBounds:;
- (void)setDisableBuildingFootprints:;
- (void)pauseFlyoverTourAnimation;
- (void).cxx_destruct;
- (id)visibleTileSets;
- (BOOL)showsBuildings;
- (void)setHidden:;
- (void)zoomToLevel:withFocusPoint:;
- (void)willStopPanningAtPoint:withVelocity:;
- (BOOL)trafficEnabled;
- (void)setCameraDelegate:;
- (void)renderInContext:;
- (double)currentZoomLevelForTileSize:;
- (void)setMapType:animated:;
- (BOOL)canRotate;
- (void)tileGroupDidChange;
- (id)detailedDescription;
- (void)didPresent;
- (void)setARSession:;
- (id).cxx_construct;
- (BOOL)virtualParallaxEnabled;
- (void)clearScene;
- (id)detailedDescriptionDictionaryRepresentation;
- (void)forceLayout;
- (id)onscreenImageResources;
- (BOOL)iconsShouldAlignToPixels;
- (void)setMapDisplayStyle:animated:;
- (void)setMapKitUsage:;
- (void)setMapRegion:pitch:yaw:duration:completion:;
- (float)zoomToRevealVenueBuildingFloorplan:;
- (float)zoomToRevealVenueFloorplan:;
- (void)setTargetDisplay:;
- (void)setTerrainMode:;
- (void)debugHighlightLabelAtPoint:;
- (void)startFlyoverAnimation:animateToStart:completion:;
- (void)startFlyoverTourAnimation:animateToStart:completion:;
- (void)startPanningAtPoint:;
- (id)labelMarkerForSelectionAtPoint:selectableLabelsOnly:;
- (BOOL)trafficIncidentsEnabled;
- (short)defaultFloorOrdinalForVenueBuilding:;
- (id)labelMarkers;
- (long long)labelScaleFactor;
- (void)prepareFlyoverAnimation:completion:;
- (void)flushTileLoads;
- (id)clearVenueBuildingFloorSelections;
- (BOOL)staysCenteredDuringPinch;
- (void)moveToFlyoverTourStartPosition:duration:completion:;
- (BOOL)moveToMarker:withHeading:animated:completionHandler:;
- (void)closeLoaderConnection;
- (void)forceCameraUpdateForFrameResize;
- (void)setTrafficIncidentsEnabled:;
- (BOOL)moveToStorefrontView:animated:completionHandler:;
- (void)forceFrame;
- (void)stopFlyoverAnimation;
- (id)muninMarkerAtCoordinate:completeMarkerHandler:;
- (void)setDimmingBaseMap:;
- (void)setDisplayRate:;
- (void)setDisplayedFloorOrdinal:forVenueBuilding:;
- (void)setDisplayedSearchResultsType:;
- (void)deselectFeatureId;
- (void)deselectTransitLineMarker;
- (id)navigationPuck;
- (id)transitLineMarkersForSelectionAtPoint:;
- (void)setEdgeInsets:duration:timingFunction:completionHandler:;
- (void)_forceLayoutForSuspensionSnapShot;
- (void)selectTransitLineMarker:;
- (void)setEmphasis:animated:;
- (void)setEnableGlobe:;
- (id)selectedTransitLineIDs;
- (void)setPointsOfInterestFilter:;
- (void)didFinishSnapshotting;
- (id)initShouldRasterize:inBackground:contentScale:auditToken:mapViewPurpose:allowsAntialiasing:;
- (BOOL)stylesheetIsDevResource;
- (BOOL)loadMuninAvailability;
- (unsigned long long)getSceneState;
- (void)openLoaderConnection;
- (BOOL)supportsMapType:;
- (BOOL)supportsNightMode;
- (long long)displayRate;
- (BOOL)displayedFloorIsDefaultForVenueBuilding:;
- (short)displayedFloorOrdinalForVenueBuilding:;
- (void)setHostDisplay:;
- (double)distanceFromPoint:toPoint:fromLayer:withPrecision:;
- (void)removeExternalAnchor:;
- (void)setRouteContext:;
- (BOOL)isDimmingBaseMap;
- (void)setRouteLineSplitAnnotation:;
- (void)setIconsShouldAlignToPixels:;
- (void)removePersistentRouteOverlay:;
- (void)addExternalAnchor:;
- (id)userLocationAnimator;
- (void)removeRouteOverlay:;
- (void)setSelectedFeatureId:;
- (BOOL)isGesturing;
- (id)convertCoordinate:toCameraModelPointToLayer:;
- (id)convertCoordinate:toPointToLayer:;
- (id)convertMapPoint:toPointToLayer:;
- (id)convertPoint:toCoordinateFromLayer:;
- (BOOL)enableDebugLabelHighlighting;
- (void)addPersistentRouteOverlay:;
- (void)setIsMKRenderingSelectionBalloon:;
- (id)convertPoint:toMapPointFromLayer:;
- (void)enableViewDataLoading:;
- (void)setIsPitchable:;
- (void)addRouteOverlay:;
- (void)setShouldLoadFallbackTiles:;
- (void)setLabelEdgeInsets:;
- (void)setLabelMarkerSelectionEnabled:;
- (void)setLabelScaleFactor:;
- (void)enterARModeAtCoordinate:;
- (void)enterMuninForMarker:withHeading:;
- (void)enterMuninForStorefrontView:secondaryStorefrontView:;
- (BOOL)isPitchable;
- (void)setCenterCoordinate:altitude:yaw:pitch:duration:timingCurve:completion:;
- (void)setShowsRoadShields:;
- (id)mapRegionBounds;
- (void)setShowsVenues:;
- (BOOL)canEnter3DModeFlyoverForTileSize:;
- (void)setLoadMuninAvailability:;
- (void)exitARMode;
- (void)setLocalizeLabels:;
- (id)currentMarker;
- (BOOL)isShowingCuratedElevatedGround;
- (BOOL)isShowingFlyover;
- (void)setStaysCenteredDuringPinch:;
- (id)iconForStyleAttributes:contentScale:size:transparent:;
- (void)setMapDelegate:;
- (BOOL)showsRoadLabels;
- (void)setShowsRoadLabels:;
- (BOOL)showsPointLabels;
- (void)setShowsPointLabels:;
- (id)selectedLabelMarker;
- (void)selectLabelMarker:;
- (void)deselectLabelMarker;
- (id)labelMarkerForCustomFeatureAnnotation:;
- (void)addCustomFeatureDataSource:;
- (void)removeCustomFeatureDataSource:;
- (void)navigationCameraReturnToPuck;
- (id)venueWithFocus;
- (id)venueWithID:;
- (id)venueBuildingWithFocus;
- (void)setSelectedVenuePoiFeatureId:;
- (void)deselectVenuePoiFeatureId;
- (void)setFlyoverMode:;
- (void)setVehicleState:;
- (BOOL)showsRoadShields;
- (BOOL)showsVenues;
- (BOOL)canShowFlyover;
- (unsigned char)displayedSearchResultsType;
- (BOOL)localizeLabels;
- (id)labelEdgeInsets;
- (BOOL)shouldLoadFallbackTiles;
- (void)setShieldSize:;
- (long long)shieldSize;
- (id)transitLineMarkersInCurrentViewport;
- (id)mapDisplayStyle;
- (id)routeContext;
- (id)buildingMarkerAtPoint:;
- (id)markerAtPoint:;
- (id)clientStyleAttributes;
- (void)setApplicationState:displayedSearchResultsType:;
- (void)setMapsUsage:;
- (id)_labelSettings;
- (BOOL)isLabelMarkerSelectionEnabled;
- (void)_closeLoaderConnection:;
- (id)secondaryCanvas;
- (void)reloadStylesheet;
- (float)styleZOffsetScale;
- (void)setStyleZOffsetScale:;
- (long long)targetDisplay;
- (id)vehicleState;
- (unsigned char)emphasis;
- (long long)applicationUILayout;
- (void)setApplicationUILayout:;
- (void)setCompressedBuildingsEnabled:;
- (void)_updateBuildingCompressionSetting;
- (long long)navigationDisplayRate;
- (void)setNavigationDisplayRate:;
- (BOOL)_createDisplayLayer;
- (void)setStaysCenteredDuringRotation:;
- (BOOL)staysCenteredDuringRotation;
- (BOOL)debugLayoutContinuously;
- (void)setDebugLayoutContinuously:;
- (void)didReceiveFlushTileCaches;
- (void)didReceiveLocalChanged;
- (BOOL)isEffectivelyHidden;
- (id)hostDisplay;
- (id)debugLabelString:;
- (void)setShouldLoadMapMargin:;
- (BOOL)shouldLoadMapMargin;
- (void)enableMapDisplayStyleDebugOverride:;
- (void)disableMapDisplayStyleDebugOverride;
- (long long)navigationShieldSize;
- (void)setNavigationShieldSize:;
- (long long)shieldIdiom;
- (void)setShieldIdiom:;
- (BOOL)isMKRenderingSelectionBalloon;
- (BOOL)isLoadingMuninMetadata;
- (void)setLoadMuninMetadata:;
- (long long)terrainMode;
- (BOOL)_modernMapAllowed;
- (void)setModernMapEnabled:;
- (BOOL)_daVinciDataAvailable;
- (BOOL)enableGlobe;
- (BOOL)_roundedBuildingsAllowed;
- (BOOL)enableRoundedBuildings;
- (void)setEnableRoundedBuildings:;
- (BOOL)_colorizedBuildingsAllowed;
- (BOOL)enableColorizedBuildings;
- (void)setEnableColorizedBuildings:;
- (BOOL)_buildingHeightsAllowed;
- (BOOL)enableBuildingHeights;
- (void)setEnableBuildingHeights:;
- (BOOL)_advancedLightingAllowed;
- (BOOL)enableAdvancedLighting;
- (void)setEnableAdvancedLighting:;
- (BOOL)_advancedWaterAllowed;
- (BOOL)enableAdvancedWater;
- (void)setEnableAdvancedWater:;
- (void)_reconfigurePermissions;
- (float)worldSpaceWidthOfView;
- (void)setDimmingBaseMap:animated:duration:;
- (id)venueAtLocation:;
- (id)venueAtLocation:withMarginForError:;
- (id)venueAtLocation:withMarginForError:includeNonRevealedVenues:;
- (void)_setFloorSwitcherZoomPadding:;
- (void)nearestVenueDidChange:building:;
- (void)setClientLocalizedStrings:;
- (void)setDesiredMapMode:;
- (void)_createGlobe;
- (void)setMapDisplayStyle:animated:duration:;
- (void)_applyMapDisplayStyle:animated:duration:;
- (void)activateInternalSettings;
- (id)initShouldRasterize:inBackground:contentScale:auditToken:mapViewPurpose:;
- (void)_configureDefaultSettings;
- (id)activeLogics;
- (void)setFullyOccludedEdgeInsets:;
- (id)fullyOccludedEdgeInsets;
- (void)setCameraFramingInsets:;
- (BOOL)canShowFlyoverAnimation;
- (void)_runFlyoverTourStateChange:completion:;
- (void)_notifyDelegateFlyoverTourLabelChanged:;
- (void)enableTestStatistics;
- (void)disableTestStatistics;
- (void)resetTestStatistics;
- (id)testStatistics;
- (void)enableTileStatistics;
- (void)disableTileStatistics;
- (void)resetTileStatistics;
- (id)tileStatistics;
- (void)stopTracking;
- (void)pauseTracking;
- (void)transitionToTracking:mapMode:startLocation:startCourse:pounceCompletionHandler:;
- (void)setTrackingCameraShouldHandleGestures:;
- (BOOL)trackingCameraShouldHandleGestures;
- (void)setHiddenTrafficIncidentFeatures:;
- (void)setExternalTrafficFeatures:areRouteTrafficFeaturesActive:;
- (void)setLabelExclusionRegions:;
- (id)labelMarkerForCustomFeatureAnnotation:dataSource:;
- (id)rapMarkerAtPoint:;
- (void)clearPreviouslySelectedLabelMarker;
- (BOOL)transitLinesDisabled;
- (void)setDisableTransitLines:;
- (void)setSelectedBuildingFeatureIds:;
- (BOOL)supportsGPUFrameCaptureToDestination;
- (int)flyoverMode;
- (double)trackingZoomScale;
- (void)setTrackingZoomScale:;
- (void)setNavContext:;
- (id)focusedLabelsPolyline;
- (void)setFocusedLabelsPolyline:;
- (void)muninJunctionDidChange:currentRoad:localize:;
- (void)activeARWalkingFeatureDidUpdate:;
- (void)arWalkingFeatureSetStateDidUpdate:;
- (void)arWalkingElevationRequestFailure:;
- (void)injectDebugARFeatures:;
- (void)injectDebugARUserRouteCoordinate:;
- (void)puckLocationTracingEvent:;
- (void)didStartLoadingData;
- (void)didFinishLoadingData;
- (void)didFinishLoadingDataWithError:;
- (void)mapDidReloadStylesheet:;
- (void)willBecomeFullyDrawn;
- (void)didUpdateSceneStatus:;
- (BOOL)isChangingRegionWithoutAnimating;
- (void)didFinishDaVinciTransition;
- (void)labelManagerDidLayout;
- (void)selectedLabelMarkerWillDisappear:;
- (void)labelMarkerDidChangeState:;
- (void)map:canShowFlyoverDidChange:;
- (void)mapDidFinishChangingMapDisplayStyle:;
- (void)map:selectedLabelMarkerWillDisappear:;
- (void)map:labelMarkerDidChangeState:;
- (void)mapLabelsDidLayout:;
- (void)_updateMapDisplayStyle;
- (void)mapController:requestsDisplayRate:;
- (void)willLayoutWithTimestamp:withContext:;
- (BOOL)wantsTimerTick;
- (void)setDisableRoads:;
- (void)setDisableLabels:;
- (void)setDisablePolygons:;
- (void)setRenderOverlayPolygons:;
- (void)setRenderInverseFills:;
- (void)setDisableRasters:;
- (void)setDisableGrid:;
- (BOOL)isFullyDrawn;
- (BOOL)roadsDisabled;
- (BOOL)labelsDisabled;
- (BOOL)polygonsDisabled;
- (BOOL)renderOverlayPolygons;
- (BOOL)renderInverseFills;
- (BOOL)buildingFootprintsDisabled;
- (BOOL)rastersDisabled;
- (BOOL)gridDisabled;
- (id)pptTileStatisticsForMapType:latitude:longitude:zoom:width:height:rect:;
- (void)forceResolveCameraController;
- (void)setUseSmallCache:;
- (void)didUpdateVerticalYawTo:;
- (void)puckAnimator:runAnimation:;
- (void)puckAnimator:updatedPosition:course:;
- (id)puckAnimator:getElevationWithCoordinate:;
- (void)projectCoordinate:toPoint:;
- (void)puckAnimatorDidStop:;
- (void)puckAnimator:updatedTargetPosition:;
- (id)sceneConfiguration;
- (id)resolveMapCameraController;
- (id)mapDelegate;
- (id)pointsOfInterestFilter;
- (BOOL)compressedBuildingsEnabled;
- (unsigned char)mapKitUsage;
- (unsigned char)mapsUsage;
- (id)currentCanvas;
- (void)debugHighlightFeatureMarker:;
- (id)mapCanvas;
- (void)performStylesheetDidChange;
- (long long)currentMapMode;
- (id)_mapDelegateQueue;
- (void)_postDelegateCallbackBlock:;
- (void)map:didEnterARMode:;
- (id)roadLabelTilesInScene;
- (void)setARSceneType:;
- (int)arSceneType;
- (int)arMode;
- (void)setARMode:;
- (void)enterARWalking:;
- (void)exitARWalking;
- (void)_setARSession:;
- (id)setARWalkingFeatureSet:;
- (void)setARWalkingFeatures:;
- (id)arWalkingDebugOutput;
- (void)arController:didEncounterError:;
- (void)arController:arSessionWasInterrupted:;
- (void)arControllerSessionInterruptionEnded:;
- (void)arController:didChangeTrackingState:reason:;
- (void)setARInterfaceOrientation:;
- (long long)getCurrentSetARInterfaceOrientation;
- (id)muninMarkerAtCoordinate:;
+ (BOOL)_globeIsAvailable;
+ (BOOL)_elevatedGroundIsAvailable;
+ (BOOL)_elevatedGroundIsEnabled;
+ (BOOL)_globeIsEnabled;
@end
