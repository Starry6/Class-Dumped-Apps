@interface ML3DatabaseFunctionBlock : ML3DatabaseFunction
@property (nonatomic) @? block;
- (id)block;
- (BOOL)registerWithConnection:;
- (void).cxx_destruct;
- (void)setBlock:;
@end
