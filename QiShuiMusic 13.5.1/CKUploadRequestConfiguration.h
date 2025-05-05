@interface CKUploadRequestConfiguration : NSObject
@property (nonatomic) NSString containerIdentifier;
@property (nonatomic) NSString applicationBundleIdentifierOverride;
@property (nonatomic) CKRecordZoneID repairZoneID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sqliteRepresentation;
- (id)initWithSqliteRepresentation:;
- (void)setApplicationBundleIdentifierOverride:;
- (id)containerIdentifier;
- (id)repairZoneID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setRepairZoneID:;
- (void)encodeWithCoder:;
- (id)applicationBundleIdentifierOverride;
- (void).cxx_destruct;
- (void)setContainerIdentifier:;
- (BOOL)isEqual:;
- (id)initFromBaseContainer:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)configurationFromBaseContainer:;
+ (id)resolvedConfigurationWithBaseContainer:overrides:;
@end
