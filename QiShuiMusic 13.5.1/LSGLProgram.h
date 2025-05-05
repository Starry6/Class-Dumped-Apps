@interface LSGLProgram : NSObject
@property (nonatomic) BOOL initialized;
@property (nonatomic) NSString vertexShaderLog;
@property (nonatomic) NSString fragmentShaderLog;
@property (nonatomic) NSString programLog;
- (void)setFragmentShaderLog:;
- (void)setProgramLog:;
- (void)setVertexShaderLog:;
- (BOOL)link;
- (BOOL)initialized;
- (void)setInitialized:;
- (void)validate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addAttribute:;
- (void)use;
- (id)initWithVertexShaderString:fragmentShaderString:;
- (BOOL)compileShader:type:string:;
- (unsigned int)attributeIndex:;
- (unsigned int)uniformIndex:;
- (id)vertexShaderLog;
- (id)fragmentShaderLog;
- (id)programLog;
- (unsigned int)getProgram;
@end
