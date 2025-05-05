@interface AggregatePropertyDescriptor : NSCoder
@property (nonatomic) NSString name;
@property (nonatomic) NSExpression expression;
@property (nonatomic) Q resultType;
- (id)expression;
- (id)initWithCoder:;
- (unsigned long long)resultType;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)name;
- (id)initWithName:expression:resultType:;
+ (BOOL)supportsSecureCoding;
@end
