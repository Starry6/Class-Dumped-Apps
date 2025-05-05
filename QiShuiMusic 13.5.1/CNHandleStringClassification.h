@interface CNHandleStringClassification : NSObject
@property (nonatomic) NSArray emailAddresses;
@property (nonatomic) NSArray phoneNumbers;
@property (nonatomic) NSArray unknown;
- (id)unknown;
- (id)phoneNumbers;
- (id)emailAddresses;
- (id)initWithEmailAddresses:phoneNumbers:unknown:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
