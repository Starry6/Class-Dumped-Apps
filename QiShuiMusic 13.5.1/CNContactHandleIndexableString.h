@interface CNContactHandleIndexableString : NSObject
@property (nonatomic) NSString stringValue;
@property (nonatomic) <_CNContactHandleStringEquivalenceStrategy> equivalenceStrategy;
@property (nonatomic) NSString indexKey;
- (id)initWithString:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)stringValue;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithFullString:indexKey:equivalenceStrategy:;
- (BOOL)isEquivalentToString:strict:;
- (id)indexKey;
- (id)equivalenceStrategy;
+ (BOOL)supportsSecureCoding;
+ (id)emailIndexKey:;
+ (id)phoneNumberIndexKey:;
+ (id)equivalenceStrategyWithString:;
@end
