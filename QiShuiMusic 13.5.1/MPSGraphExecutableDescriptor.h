@interface MPSGraphExecutableDescriptor : NSObject
@property (nonatomic) Q compilerOptions;
@property (nonatomic) @? variableFetchHandler;
@property (nonatomic) MPSGraphCompilationDescriptor compilationDescriptor;
- (id)init;
- (void).cxx_destruct;
- (id)compilationDescriptor;
- (void)setCompilationDescriptor:;
- (unsigned long long)compilerOptions;
- (void)setCompilerOptions:;
- (id)variableFetchHandler;
- (void)setVariableFetchHandler:;
@end
