@interface MLTreeEnsembleRegressor : MLRegressor
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)regress:options:error:;
- (double)scalarRegress:error:;
- (id)modelData;
- (void)vectorRegress:dest:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (double)scalarRegress:;
+ (id)compileSpecification:toArchive:options:error:;
+ (id)compiledVersionForSpecification:options:error:;
+ (id)loadModelFromSpecification:configuration:error:;
+ (id)loadModelFromSpecificationWithCompilationOptions:options:error:;
+ (id)loadModelFromCompiledArchive:modelVersionInfo:compilerVersionInfo:configuration:error:;
@end
