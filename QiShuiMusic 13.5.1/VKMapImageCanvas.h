@interface VKMapImageCanvas : VKImageCanvas
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMapType:;
- (void)dealloc;
- (void)updateWithTimestamp:withContext:;
- (void)cancelTileRequests;
- (void).cxx_destruct;
- (id)initWithMapEngine:;
- (void)tileGroupDidChange;
- (void)resetCameraController;
- (id).cxx_construct;
- (void)clearScene;
@end
