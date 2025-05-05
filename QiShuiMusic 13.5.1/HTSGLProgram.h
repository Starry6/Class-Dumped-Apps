@interface HTSGLProgram : NSObject
@property (nonatomic) HTSGLContext context;
@property (nonatomic) BOOL initialized;
@property (nonatomic) NSString vertexShaderLog;
@property (nonatomic) NSString fragmentShaderLog;
@property (nonatomic) NSString programLog;
- (void)deInit;
- (id)initWithVertexShaderString:fragmentShaderString:context:;
- (void)setFragmentShaderLog:;
- (void)setProgramLog:;
- (void)setVertexShaderLog:;
- (BOOL)link;
- (BOOL)initialized;
- (void)setInitialized:;
- (void)validate;
- (void)dealloc;
- (id)context;
- (void).cxx_destruct;
- (void)addAttribute:;
- (void)setContext:;
- (void)use;
- (BOOL)compileShader:type:string:;
- (unsigned int)attributeIndex:;
- (unsigned int)uniformIndex:;
- (id)vertexShaderLog;
- (id)fragmentShaderLog;
- (id)programLog;
- (int)getProgram;
@end
