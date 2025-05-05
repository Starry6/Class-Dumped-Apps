@interface VKGlobeImageCanvas : VKImageCanvas
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMapType:;
- (void)dealloc;
- (void)didLayout;
- (void)updateWithTimestamp:withContext:;
- (void)cancelTileRequests;
- (void).cxx_destruct;
- (void)willDealloc;
- (id)initWithMapEngine:;
- (id).cxx_construct;
- (void)_updateViewport;
@end
