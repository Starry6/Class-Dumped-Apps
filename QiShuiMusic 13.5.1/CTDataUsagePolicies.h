@interface CTDataUsagePolicies : NSObject
@property (nonatomic) NSString bundleId;
@property (nonatomic) q cellular;
@property (nonatomic) q wifi;
@property (nonatomic) BOOL isManaged;
@property (nonatomic) BOOL isRestricted;
- (BOOL)isRestricted;
- (long long)wifi;
- (id)bundleId;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isManaged;
- (void)setIsManaged:;
- (void).cxx_destruct;
- (void)setWifi:;
- (long long)cellular;
- (id)description;
- (void)setBundleId:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)init:withCellularPolicy:andWifiPolicy:;
- (id)init:withCellularPolicy:wifiPolicy:isManaged:andIsRestricted:;
- (void)setCellular:;
- (void)setIsRestricted:;
+ (BOOL)supportsSecureCoding;
@end
