@interface MLTreeEnsembleClassifier : MLClassifier
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)classify:options:error:;
- (id)_buildClassificationClasses:topk:error:;
- (id)modelData;
- (id)prepareInput:error:;
- (void).cxx_destruct;
- (void)_setSingleArrayLookupField;
- (id).cxx_construct;
+ (id)compileSpecification:toArchive:options:error:;
+ (id)compiledVersionForSpecification:options:error:;
+ (id)loadModelFromSpecification:configuration:error:;
+ (id)loadModelFromSpecificationWithCompilationOptions:options:error:;
+ (BOOL)_convertStringClassVector:int64ClassVector:dimensions:toClassLabel:classType:andReturnError:;
+ (id)loadModelFromCompiledArchive:modelVersionInfo:compilerVersionInfo:configuration:error:;
@end
