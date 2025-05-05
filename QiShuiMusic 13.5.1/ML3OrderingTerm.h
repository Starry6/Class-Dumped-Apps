@interface ML3OrderingTerm : NSObject
@property (nonatomic) NSString property;
@property (nonatomic) NSInteger direction;
@property (nonatomic) NSString collation;
- (id)collation;
- (int)direction;
- (void)appendSQLToMutableString:entityClass:;
- (id)initWithProperty:;
- (id)property;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithProperty:direction:collation:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithProperty:direction:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)reversedTerms:;
+ (id)orderingTermWithProperty:;
+ (id)orderingTermWithProperty:direction:;
@end
