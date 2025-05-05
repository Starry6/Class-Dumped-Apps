@interface ASFImageFilter : NSObject
@property (nonatomic) <MTLTexture> texture;
@property (nonatomic) NSString str;
@property (nonatomic) ASFMetalContext context;
@property (nonatomic) NSMutableArray pipelines;
@property (nonatomic) NSArray inTextures;
@property (nonatomic) NSArray outTextures;
@property (nonatomic) {?=QQQ} threadNum;
- (void)setOutTextures:;
- (void)setStr:;
- (void)applyFilterWithTextures:;
- (void)applyFilterWithTextures:block:;
- (void)configureArgumentTableWithCommandEncoder:param:;
- (id)getExecPipeline:;
- (id)inTextures;
- (id)initWithFunctionName:context:;
- (id)outTextures;
- (void)setInTextures:;
- (void)setThreadNum:;
- (id)threadNum;
- (id)texture;
- (id)context;
- (void)setTexture:;
- (id)pipelines;
- (id)str;
- (void).cxx_destruct;
- (void)setContext:;
- (void)setPipelines:;
@end
