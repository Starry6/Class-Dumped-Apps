@interface ASDPurgeableApp : NSObject
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSString purgeableReason;
@property (nonatomic) q purgeableType;
@property (nonatomic) q staticDiskUsage;
@property (nonatomic) NSNumber storeItemID;
- (id)storeItemID;
- (void)setStoreItemID:;
- (id)diagnosticDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)bundleID;
- (id)copyWithZone:;
- (void)setBundleID:;
- (long long)staticDiskUsage;
- (id)purgeableReason;
- (void)setPurgeableReason:;
- (long long)purgeableType;
- (void)setPurgeableType:;
- (void)setStaticDiskUsage:;
+ (BOOL)supportsSecureCoding;
@end
