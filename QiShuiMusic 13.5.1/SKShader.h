@interface SKShader : NSObject
@property (nonatomic) NSArray _textureUniforms;
@property (nonatomic) ^v _attributeBuffers;
@property (nonatomic) {shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}} _backingProgram;
@property (nonatomic) {shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}} _backingProgramWithTransform;
@property (nonatomic) {shared_ptr<jet_command_buffer>=^{jet_command_buffer}^{__shared_weak_count}} _commands;
@property (nonatomic) BOOL performFullCapture;
@property (nonatomic) NSString source;
@property (nonatomic) NSArray uniforms;
@property (nonatomic) NSArray attributes;
- (id)initWithSource:;
- (id)init;
- (id)initWithCoder:;
- (void)setAttributes:;
- (id)uniforms;
- (id)attributes;
- (void)encodeWithCoder:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
- (id).cxx_construct;
- (id)copyWithZone:;
- (id)_commands;
- (BOOL)performFullCapture;
- (void)setPerformFullCapture:;
- (id)initWithSource:uniforms:;
- (id)_attributeBuffers;
- (id)fragmentPrelude;
- (id)fragmentPreludeMetal;
- (void)generateVertexAttributeDeclares:statements:;
- (void)generateFragmentAttributeDeclares:;
- (id)fullVertexSource;
- (id)fullVertexWithTransformSource;
- (id)_fullVertexSourceWithImplementation:;
- (id)fullFragmentSource;
- (id)fullMetalVertexSource;
- (id)fullMetalVertexWithTransformSource;
- (id)_fullMetalVertexSourceWithImplementation:;
- (id)fullMetalFragmentSource;
- (void)setUniforms:;
- (void)addUniform:;
- (id)uniformNamed:;
- (void)removeUniformNamed:;
- (id)_textureUniforms;
- (BOOL)_backingProgramIsDirty;
- (id)_backingProgram;
- (id)_backingProgramWithTransform;
- (id)_makeBackingProgramWithImplementation:;
- (id)_commandsForBatchOffset:count:;
- (id)_generateMetalSource;
- (id)_getMetalVertexOutDefinition;
- (id)_getMetalFragmentFunctionName;
- (id)_getShaderCompilationLog;
- (id)_getMetalVertexShaderSource:;
- (id)_getMetalFragmentShaderSource;
- (BOOL)_usesTimeUniform;
- (BOOL)_usesPathLengthUniform;
- (void)_setUniformsDirty;
- (void)_addTargetNode:;
- (void)_removeTargetNode:;
- (BOOL)isEqualToShader:;
- (id)_getLegacyUniformData;
+ (BOOL)supportsSecureCoding;
+ (id)shader;
+ (id)shaderWithSource:;
+ (id)shaderWithSource:uniforms:;
+ (id)shaderWithFileNamed:;
+ (id)precompiledMetalShaderWithFile:uniforms:;
@end
