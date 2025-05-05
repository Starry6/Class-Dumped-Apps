@interface MLPipelineUpdateEngine : MLPipeline
@property (nonatomic) {vector<unsigned long long updatableModelIndicies;
@property (nonatomic) MLUpdateProgressHandlers progressHandlers;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)parameterValueForKey:error:;
- (void)updateModelWithData:;
- (id)initFromCompiledArchive:modelVersionInfo:compilerVersionInfo:configuration:error:;
- (void)cancelUpdate;
- (id)dispatchQueue;
- (BOOL)writeToURL:error:;
- (void)setDispatchQueue:;
- (void)resumeUpdateWithParameters:;
- (void)resumeUpdate;
- (void)setProgressHandlers:;
- (void)setUpdateProgressHandlers:dispatchQueue:;
- (id)progressHandlers;
- (void).cxx_destruct;
- (id)updatableModelIndicies;
- (id).cxx_construct;
+ (id)loadModelFromCompiledArchive:modelVersionInfo:compilerVersionInfo:configuration:error:;
@end
