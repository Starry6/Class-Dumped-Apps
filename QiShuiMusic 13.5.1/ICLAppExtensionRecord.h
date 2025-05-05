@interface ICLAppExtensionRecord : ICLBundleRecord
@property (nonatomic) NSString extensionOwnerBundleID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)legacyRecordDictionary;
- (id)initWithLegacyRecordDictionary:;
- (id)extensionOwnerBundleID;
- (void)setExtensionOwnerBundleID:;
+ (BOOL)supportsSecureCoding;
@end
