@interface BDREFuncNode : BDREBaseNode
@property (nonatomic) BDREFunc func;
@property (nonatomic) NSString funcName;
- (id)func;
- (id)funcName;
- (id)initWithFuncName:func:originValue:index:;
- (void)setFunc:;
- (void)setFuncName:;
- (void).cxx_destruct;
@end
