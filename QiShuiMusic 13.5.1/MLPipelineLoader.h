@interface MLPipelineLoader : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)compileSpecification:toArchive:options:error:;
+ (id)compiledVersionForSpecification:options:error:;
+ (id)loadModelFromCompiledArchive:modelVersionInfo:compilerVersionInfo:configuration:error:;
@end
