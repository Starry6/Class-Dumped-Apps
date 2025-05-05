@interface IDSSigningOptions : NSObject
@property (nonatomic) I keyType;
@property (nonatomic) IDSSigningKeyDiversifier keyDiversifier;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned int)keyType;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)keyDiversifier;
- (id)initWithKeyType:diversifier:;
- (void)setKeyType:;
- (void)setKeyDiversifier:;
+ (BOOL)supportsSecureCoding;
@end
