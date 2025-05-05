@interface ML3BitMaskPredicate : ML3PropertyPredicate
@property (nonatomic) q mask;
@property (nonatomic) q value;
- (id)databaseStatementParameters;
- (void)appendSQLToMutableString:entityClass:;
- (id)initWithProperty:mask:value:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setValue:;
- (long long)mask;
- (void)setMask:;
- (id)description;
- (long long)value;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)predicateWithProperty:mask:value:;
@end
