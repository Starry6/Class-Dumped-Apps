@interface BDREOperatorCommand : BDRECommand
@property (nonatomic) BDREOperator operator;
@property (nonatomic) Q opDataNumber;
- (void)execute:withEnv:error:;
- (unsigned long long)opDataNumber;
- (void)setOpDataNumber:;
- (id)operator;
- (void)setOperator:;
- (void).cxx_destruct;
- (id)instruction;
- (id)initWithOperator:;
@end
