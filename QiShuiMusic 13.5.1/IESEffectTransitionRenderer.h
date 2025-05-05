@interface IESEffectTransitionRenderer : NSObject
@property (nonatomic) ^v renderMangerHandle;
@property (nonatomic) IESMMEffectConfig effectConfig;
@property (nonatomic) NSString preResourcePath;
@property (nonatomic) HTSGLContext context;
@property (nonatomic) double progress;
- (id)preResourcePath;
- (void)checkEffectError:msg:;
- (BOOL)checkInputParamsIsValid:;
- (id)initWithCanvasSize:;
- (id)renderMangerHandle;
- (void)setEffectConfig:;
- (void)setLoadResourceTimeout:;
- (void)setPreResourcePath:;
- (void)setRenderMangerHandle:;
- (void)setTransitionInfo:outputFrame:;
- (BOOL)setupEngineHandler;
- (id)init;
- (void)dealloc;
- (id)effectConfig;
- (id)context;
- (void)setPath:;
- (void)setProgress:;
- (void)setResolution:;
- (void)setDuration:;
- (double)progress;
- (void).cxx_destruct;
- (void)setContext:;
@end
