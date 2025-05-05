@interface MKMapSnapshot : NSObject
@property (nonatomic) UIImage image;
@property (nonatomic) UITraitCollection traitCollection;
- (BOOL)_hasNoDataPlaceholders;
- (id)pointForCoordinate:;
- (id)traitCollection;
- (void)_compositeOnImages:drawQueue:callbackQueue:completionHandler:;
- (id)_statsMemoryUsage;
- (id)_initWithSnapshot:traitCollection:;
- (void).cxx_destruct;
- (void)_prepareForRenderWithAnnotationViews:workQueue:annotationViewDrawingQueue:completionHandler:;
- (id)_coordinateForPoint:;
- (id)snapshotWithAnnotationView:atCoordinate:;
- (id)snapshotWithAnnotationView:atPoint:;
- (void)_displayAppleLogoForMapType:callbackQueue:completionHandler:;
- (id)image;
+ (id)createSnapshotWithOptions:timeoutInSeconds:;
@end
