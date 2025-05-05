@interface NSKeyPathExpression : NSFunctionExpression
- (void)acceptVisitor:flags:;
- (void)dealloc;
- (id)predicateFormat;
- (id)keyPath;
- (id)initWithOperand:andKeyPath:;
- (id)initWithKeyPath:;
- (id)pathExpression;
@end
