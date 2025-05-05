@interface CNContactFormatterSmartFetcher : CNSmartPropertyFetcher
@property (nonatomic) BOOL ignoresNickname;
@property (nonatomic) BOOL ignoresOrganization;
- (void)_cn_executeGetterForRepresentedKeys:;
- (id)_cn_optionalKeys;
- (id)_cn_requiredKeys;
- (id)_cn_ignorableKeys;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (BOOL)ignoresNickname;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setIgnoresNickname:;
- (BOOL)ignoresOrganization;
- (void)setIgnoresOrganization:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
