@interface CPLFeatureVersionHistory : NSObject
@property (nonatomic) q currentFeatureVersion;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithCurrentFeatureVersion:;
- (void)addSyncAnchor:forFeatureVersion:;
- (id)syncAnchorForFeatureVersion:;
- (long long)featureVersionForSyncAnchor:;
- (void)enumerateHistoryWithBlock:;
- (long long)currentFeatureVersion;
+ (BOOL)supportsSecureCoding;
@end
