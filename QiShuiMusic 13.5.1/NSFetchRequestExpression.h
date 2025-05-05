@interface NSFetchRequestExpression : NSExpression
@property (nonatomic) NSExpression requestExpression;
@property (nonatomic) NSExpression contextExpression;
@property (nonatomic) BOOL countOnlyRequest;
- (void)acceptVisitor:flags:;
- (void)dealloc;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_expressionWithSubstitutionVariables:;
- (void)encodeWithCoder:;
- (id)description;
- (id)expressionValueWithObject:context:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initForFetch:context:countOnly:;
- (unsigned long long)expressionType;
- (id)requestExpression;
- (id)contextExpression;
- (BOOL)isCountOnlyRequest;
+ (BOOL)supportsSecureCoding;
+ (id)expressionForFetch:context:countOnly:;
@end
