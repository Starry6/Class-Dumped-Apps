@interface LNAppIntentConnectionPolicy : NSObject
@property (nonatomic) q bundleMetadataVersion;
@property (nonatomic) NSString appBundleIdentifier;
@property (nonatomic) NSString appIntentIdentifier;
@property (nonatomic) NSString appIntentMangledTypeName;
@property (nonatomic) LNEffectiveBundleIdentifier effectiveBundleIdentifier;
@property (nonatomic) BOOL openAppWhenRun;
- (unsigned long long)hash;
- (id)appBundleIdentifier;
- (id)effectiveBundleIdentifier;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)openAppWhenRun;
- (long long)bundleMetadataVersion;
- (id)actionWithParameters:;
- (id)connectionWithError:;
- (id)initWithAppIntentMetadata:effectiveBundleIdentifier:appBundleIdentifier:;
- (id)appIntentIdentifier;
- (id)appIntentMangledTypeName;
@end
