@interface VCPEspressoModel : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (int)loadModel:;
- (id)initModelWithName:andConfig:;
- (BOOL)prepareModelWithFile:engine:config:error:;
- (BOOL)buildModelWithConfig:error:;
- (BOOL)updateModelWithConfig:error:;
- (void)freeModel;
@end
