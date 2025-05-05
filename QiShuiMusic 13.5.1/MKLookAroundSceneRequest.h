@interface MKLookAroundSceneRequest : NSObject
@property (nonatomic) {CLLocationCoordinate2D=dd} coordinate;
@property (nonatomic) MKMapItem mapItem;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL loading;
- (id)mapItem;
- (BOOL)isLoading;
- (id)initWithCoordinate:;
- (void)cancel;
- (void)dealloc;
- (BOOL)isCancelled;
- (id)initWithMapItem:;
- (void).cxx_destruct;
- (id)coordinate;
- (void)_handleMapItems:error:completionHandler:;
- (void)getSceneWithCompletionHandler:;
- (void)_performLookupRequestWithMapItem:orCoordinate:completionHandler:;
@end
