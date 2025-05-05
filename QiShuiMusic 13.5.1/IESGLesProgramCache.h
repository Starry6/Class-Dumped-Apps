@interface IESGLesProgramCache : NSObject
@property (nonatomic) HTSGLContext context;
@property (nonatomic) NSMutableDictionary innerProgramCache;
@property (nonatomic) NSMutableDictionary customerProgramCache;
- (id)createProgram:;
- (id)customerProgramCache;
- (id)fetchProgram:;
- (id)fetchProgramForVertexShaderString:fragmentShaderString:attribute:;
- (id)innerProgramCache;
- (void)setCustomerProgramCache:;
- (void)setInnerProgramCache:;
- (id)context;
- (void)flush;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)setContext:;
@end
