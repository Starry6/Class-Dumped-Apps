@interface MLCompiler : NSObject
+ (id)versionInfo;
+ (id)compileSpecification:toArchive:options:error:;
+ (id)addMLProgramToCompiledModelAtURL:withCompilationMode:dryRun:oarchiveForModelCompilation:compilerEvent:error:;
+ (void)_updateMetadata:withMetadata:;
+ (id)compileSpecification:toArchive:options:compilerEvent:error:;
+ (id)compiledVersionForSpecification:options:error:;
+ (BOOL)fingerprintSpecificationAtURL:toArchive:hash:error:;
+ (void)_updateSpecification:withModelDescription:;
+ (id)addMLProgramToCompiledModelAtURL:error:;
+ (id)compiledVersionForSpecificationAtURL:options:error:;
+ (id)compiledVersionForModelAtURL:options:error:;
+ (id)_compileSpecificationAtURL:toURL:compiledModelName:overridingModelDescription:options:error:;
+ (id)hashSpecificationAtURL:;
+ (BOOL)encryptCompiledModelAtURL:options:error:;
+ (void)_updateFeatures:withFeatures:;
+ (BOOL)_loadSpecificationAtURL:to:error:;
+ (BOOL)fillCompilerEvent:withMetadataFromModelAt:error:;
+ (BOOL)encryptFileAtURL:options:error:;
+ (id)compileSpecificationAtURL:toURL:options:error:;
+ (id)compileModelAtURL:toURL:options:error:;
+ (id)contentsOfDirectoryAtURL:error:;
+ (BOOL)storeEncryptionInfoInCompiledArchive:options:error:;
+ (BOOL)canAddMLProgramToCompiledModelAtURL:;
@end
