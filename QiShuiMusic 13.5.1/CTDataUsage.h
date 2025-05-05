@interface CTDataUsage : NSObject
@property (nonatomic) Q cellularHome;
@property (nonatomic) Q cellularRoaming;
@property (nonatomic) Q wifi;
- (unsigned long long)wifi;
- (BOOL)isEmpty;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void)setWifi:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithHome:roaming:wifi:;
- (void)addUsage:;
- (unsigned long long)cellularHome;
- (void)setCellularHome:;
- (unsigned long long)cellularRoaming;
- (void)setCellularRoaming:;
+ (BOOL)supportsSecureCoding;
@end
