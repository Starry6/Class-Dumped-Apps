@interface BDREConstNode : BDREBaseNode
@property (nonatomic) @ constValue;
- (id)initWithConstValue:originValue:index:;
- (void)setConstValue:;
- (void).cxx_destruct;
- (id)getValue;
- (id)constValue;
@end
