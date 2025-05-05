@interface BDREFunctionCommand : BDRECommand
@property (nonatomic) BDREFunc func;
@property (nonatomic) NSString funcName;
@property (nonatomic) Q argsNumber;
- (unsigned long long)argsNumber;
- (void)execute:withEnv:error:;
- (id)func;
- (id)funcName;
- (id)initWithFuncName:func:argsLength:;
- (void)setArgsNumber:;
- (void)setFunc:;
- (void)setFuncName:;
- (void).cxx_destruct;
- (id)instruction;
@end
