@interface VKAnchorWrapper : NSObject
@property (nonatomic) <MDRenderTarget> displayLayer;
@property (nonatomic) {?=dd} coordinate;
@property (nonatomic) {?=ddd} coordinate3D;
@property (nonatomic) double elevationOffset;
@property (nonatomic) BOOL followsTerrain;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)pointOffsetForDistanceOffset:;
- (void)dealloc;
- (void)updateIfNeeded;
- (id)pointInLayer:bound:;
- (void).cxx_destruct;
- (id)coordinate;
- (id).cxx_construct;
- (void)setFollowsTerrain:;
- (void)anchorWorldPointDidChange:;
- (void)destroyAnchor;
- (double)elevationOffset;
- (id)coordinate3D;
- (id)_anchorWithContext:;
- (void)_updateCachedPoint;
- (void)layoutWithContext:;
- (BOOL)followsTerrain;
- (id)displayLayer;
- (void)setDisplayLayer:;
@end
