@interface ASDAppClusterMapping : NSObject
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSNumber clusterID;
@property (nonatomic) NSNumber clusterVersion;
@property (nonatomic) NSNumber itemID;
@property (nonatomic) NSNumber launchesWeight;
@property (nonatomic) NSNumber usageWeight;
- (id)clusterID;
- (void)setClusterID:;
- (id)itemID;
- (id)initWithCoder:;
- (void)setItemID:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)bundleID;
- (id)copyWithZone:;
- (void)setBundleID:;
- (id)clusterVersion;
- (void)setClusterVersion:;
- (id)launchesWeight;
- (void)setLaunchesWeight:;
- (id)usageWeight;
- (void)setUsageWeight:;
+ (BOOL)supportsSecureCoding;
@end
