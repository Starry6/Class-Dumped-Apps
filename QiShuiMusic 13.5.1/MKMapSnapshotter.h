@interface MKMapSnapshotter : NSObject
@property (nonatomic) BOOL loading;
- (BOOL)isLoading;
- (id)init;
- (void)cancel;
- (void)dealloc;
- (void)startWithCompletionHandler:;
- (id)initWithOptions:;
- (void)_setupCustomFeaturesForAnnotationViewsIfNeeded;
- (void)_cleanupSnapshotCreator;
- (BOOL)_isWidget;
- (BOOL)_shouldRenderLogoForSnapshotDimensions;
- (void)_cancel;
- (void)_exitBackground:;
- (void)_enterBackground:;
- (void)_drawAppleLogoIfNecessaryOnSnapshot:;
- (void)_succeedWithSnapshot:;
- (void)startWithQueue:completionHandler:;
- (void).cxx_destruct;
- (void)_respondWithError:;
- (void)_deliverSnapshot:;
- (void)_performSnapshot;
- (void)_failWithError:;
@end
