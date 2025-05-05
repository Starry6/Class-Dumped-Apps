@interface IESMMCanvasSrcManager : IESMMObject
@property (nonatomic) NSMutableDictionary srcdict;
@property (nonatomic) @? sourceBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSourceBlock:;
- (id)srcdict;
- (id)getSourceWithIndex:;
- (void)insertSourceToIndex:;
- (void)registerCanvasSourceBlock:;
- (void)removeSourceWithIndex:;
- (void)setSrcdict:;
- (id)sourceBlock;
- (void)transformSource:toPoint:;
- (void)transformSource:toRotation:;
- (void)transformSource:toScale:;
- (id)init;
- (void).cxx_destruct;
@end
