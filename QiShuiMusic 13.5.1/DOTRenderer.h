@interface DOTRenderer : NSObject
@property (nonatomic) NSInteger direction;
@property (nonatomic) {CGSize=dd} separation;
@property (nonatomic) BOOL drawEdgesFirst;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)direction;
- (void)setFileURL:;
- (id)init;
- (void)setDirection:;
- (void)dealloc;
- (BOOL)setCanvasWidth:height:;
- (void)drawNode:;
- (void)drawEdge:withPath:;
- (id)separation;
- (BOOL)drawEdgesFirst;
- (void)setFileTitle:;
- (void)flushRender;
- (void)setSeparation:;
- (void)setDrawEdgesFirst:;
@end
