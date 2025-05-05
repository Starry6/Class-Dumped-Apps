@interface MKMapSnapshotRequest : NSObject
@property (nonatomic) @ context;
@property (nonatomic) @ requester;
@property (nonatomic) NSString attributionString;
@property (nonatomic) {CLLocationCoordinate2D=dd} coordinate;
@property (nonatomic) Q zoomLevel;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) MKMapSnapshotCreator delegate;
@property (nonatomic) UIImage image;
- (unsigned long long)zoomLevel;
- (void)setZoomLevel:;
- (void)cancel;
- (void)setRequester:;
- (id)context;
- (void)start;
- (void)setDelegate:;
- (id)delegate;
- (id)requester;
- (void).cxx_destruct;
- (id)coordinate;
- (id)description;
- (void)setCoordinate:;
- (void)setContext:;
- (void)setSize:;
- (id)image;
- (id)size;
- (id)attributionString;
- (void)setAttributionString:;
@end
