@interface IESLatchRuleQueryNode : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSArray values;
@property (nonatomic) NSString ruleOperator;
@property (nonatomic) Q sourceType;
- (unsigned long long)sourceType;
- (id)jsonRepresentation;
- (id)values;
- (id)ruleOperator;
- (id)key;
- (void)setSourceType:;
- (void)setKey:;
- (void)setRuleOperator:;
- (void).cxx_destruct;
- (void)setValues:;
@end
