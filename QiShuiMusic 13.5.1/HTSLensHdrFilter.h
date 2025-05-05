@interface HTSLensHdrFilter : HTSGLFilter
@property (nonatomic) BOOL shouldDoProcess;
@property (nonatomic) BOOL isExternalAlgorithm;
@property (nonatomic) BOOL enableAgfxContext;
@property (nonatomic) NSString modelPath;
@property (nonatomic) BOOL mIsMutliTrack;
- (BOOL)shouldDoProcess;
- (BOOL)enableAgfxContext;
- (BOOL)initAlgorithmEngine:isMutliTrack:;
- (BOOL)isExternalAlgorithm;
- (BOOL)mIsMutliTrack;
- (void)renderToTextureWithVertices:textureCoordinates:;
- (void)setEnableAgfxContext:;
- (void)setIsExternalAlgorithm:;
- (void)setMIsMutliTrack:;
- (void)setRLDevice;
- (void)setShouldDoProcess:;
- (void)setModelPath:;
- (void)dealloc;
- (id)initWithContext:;
- (void).cxx_destruct;
- (id)modelPath;
@end
