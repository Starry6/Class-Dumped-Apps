@interface MLMultiFunctionProgramContainer : MLProgramContainer
@property (nonatomic) NSDictionary functionNameToOutputLayersNames;
@property (nonatomic) NSDictionary functionNameToInputLayersNames;
@property (nonatomic) NSString activeFunction;
- (void)setActiveFunction:;
- (id)activeFunction;
- (id)initWithContainer:program:error:;
- (id)functionNameToOutputLayersNames;
- (void).cxx_destruct;
- (void)setFunctionNameToOutputLayersNames:;
- (id)functionNameToInputLayersNames;
- (id).cxx_construct;
- (void)setFunctionNameToInputLayersNames:;
+ (id)containerFromCompiledArchive:modelVersionInfo:compilerVersionInfo:configuration:error:;
@end
