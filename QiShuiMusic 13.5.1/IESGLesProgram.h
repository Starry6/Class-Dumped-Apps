@interface IESGLesProgram : NSObject
@property (nonatomic) HTSGLContext context;
@property (nonatomic) I program;
@property (nonatomic) I vShader;
@property (nonatomic) I fShader;
@property (nonatomic) NSMutableDictionary uniformDict;
@property (nonatomic) q programType;
- (unsigned int)fShader;
- (void)setUniformDict:;
- (unsigned int)vShader;
- (void)setProgramType:;
- (void)bindAttribute:;
- (unsigned int)compileShader:string:;
- (int)fetchUniform:;
- (id)initWithContext:vertex:fragment:;
- (void)setFShader:;
- (void)setVShader:;
- (id)uniformDict;
- (void)unuse;
- (BOOL)link;
- (void)dealloc;
- (id)context;
- (void).cxx_destruct;
- (void)setContext:;
- (unsigned int)program;
- (void)use;
- (void)setProgram:;
- (long long)programType;
@end
