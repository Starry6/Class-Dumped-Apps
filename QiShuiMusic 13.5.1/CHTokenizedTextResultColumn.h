@interface CHTokenizedTextResultColumn : NSObject
@property (nonatomic) NSArray tokenRows;
@property (nonatomic) NSIndexSet strokeIndexes;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)strokeIndexes;
- (id)initWithTokenRows:;
- (long long)indexOfEquivalentTokenRow:tokenRange:;
- (BOOL)containsStartingTokenEquivalentToToken:;
- (BOOL)isEqualToTokenizedTextResultColumn:;
- (id)tokenRows;
+ (BOOL)supportsSecureCoding;
@end
