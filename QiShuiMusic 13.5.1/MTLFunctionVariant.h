@interface MTLFunctionVariant : NSObject
@property (nonatomic) NSObject<OS_dispatch_data> debugInstrumentationData;
- (void)dealloc;
- (void)setDebugInstrumentationData:;
- (id)debugInstrumentationData;
- (id)initWithCompilerOutput:;
- (id)inputInfoAndSize:;
- (void)setInputInfo:size:;
- (id)outputInfoAndSize:;
- (void)setOutputInfo:size:;
@end
