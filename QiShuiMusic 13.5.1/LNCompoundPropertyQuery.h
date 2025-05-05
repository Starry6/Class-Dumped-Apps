@interface LNCompoundPropertyQuery : LNPropertyQuery
@property (nonatomic) Q type;
@property (nonatomic) NSArray comparisons;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithType:comparisons:;
- (id)comparisons;
+ (BOOL)supportsSecureCoding;
+ (id)andComparisons:;
+ (id)orComparisons:;
@end
