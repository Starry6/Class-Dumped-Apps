@interface IESGLAddEdgeFilter : HTSGLFilter
@property (nonatomic) HTSGLFramebuffer backgroundBuffer;
@property (nonatomic) {CGSize=dd} frameSize;
@property (nonatomic) {CGSize=dd} realVideoSize;
@property (nonatomic) {CGSize=dd} outputVideoSize;
@property (nonatomic) IESVideoAddEdgeData addEdgeInfo;
- (id)outputFrameSize;
- (void)setAddEdgeInfo:;
- (id)addEdgeInfo;
- (id)getRealVideoSize;
- (void)initializeRenderer:;
- (id)realVideoSize;
- (void)renderToTextureWithVertices:textureCoordinates:;
- (void)resetFrameVertices;
- (void)setBackGroundColor:g:b:;
- (void)setInputSize:atIndex:;
- (void)setRealVideoSize:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)setFrameSize:;
- (id)frameSize;
- (id)outputVideoSize;
- (id)backgroundBuffer;
- (void)setBackgroundBuffer:;
@end
