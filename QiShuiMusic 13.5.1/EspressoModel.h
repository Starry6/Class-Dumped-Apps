@interface EspressoModel : NSObject
@property (nonatomic) q usage;
- (long long)usage;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setUsage:;
- (id)initWithModelName:usage:;
- (id)initWithModelName:configuration:;
- (id)initMPSWithModelName:usage:;
- (BOOL)initContextWithFile:engine:configuration:usePreCompiled:;
- (void)freeContext;
- (BOOL)buildModelWithConfiguration:;
- (int)loadModel:from:;
- (BOOL)switchUsage:;
@end
