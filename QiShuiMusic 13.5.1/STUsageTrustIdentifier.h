@interface STUsageTrustIdentifier : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL usageTrusted;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)usageTrusted;
- (id)initWithIdentifier:usageTrusted:;
- (void)_stUsageTrustIdentifierCommonInitWithIdentifier:usageTrusted:;
+ (BOOL)supportsSecureCoding;
@end
