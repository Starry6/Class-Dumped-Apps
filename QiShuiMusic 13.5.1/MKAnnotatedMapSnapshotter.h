@interface MKAnnotatedMapSnapshotter : NSObject
@property (nonatomic) MKMapCamera camera;
@property (nonatomic) BOOL loading;
@property (nonatomic) UITraitCollection traitCollection;
- (id)camera;
- (void)setTraitCollection:;
- (BOOL)isLoading;
- (void)cancel;
- (void)startWithCompletionHandler:;
- (id)traitCollection;
- (void)startWithQueue:completionHandler:;
- (void).cxx_destruct;
- (id)initWithMapItems:mapSize:useSnapshotService:;
- (void)_initSnapshotterWithMapItems;
@end
