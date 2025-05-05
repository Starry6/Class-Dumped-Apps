@interface ELOperatorToken : NSObject
@property (nonatomic) NSString operatorToken;
- (id)initOperatorWithToken:;
- (long long)operatorPriority;
- (id)operatorRawValue;
- (id)operatorToken;
- (void)setOperatorToken:;
- (BOOL)validOperator;
- (void).cxx_destruct;
+ (long long)priorityWithOperator:;
@end
