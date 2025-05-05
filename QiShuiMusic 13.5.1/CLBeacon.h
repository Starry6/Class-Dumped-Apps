@interface CLBeacon : NSObject
@property (nonatomic) NSDate timestamp;
@property (nonatomic) NSUUID UUID;
@property (nonatomic) NSUUID proximityUUID;
@property (nonatomic) NSNumber major;
@property (nonatomic) NSNumber minor;
@property (nonatomic) q proximity;
@property (nonatomic) double accuracy;
@property (nonatomic) q rssi;
- (void)setReferenceFrame:;
- (long long)rssi;
- (void)dealloc;
- (long long)proximity;
- (id)initWithCoder:;
- (double)accuracy;
- (int)referenceFrame;
- (void)encodeWithCoder:;
- (id)timestamp;
- (id)description;
- (id)major;
- (id)minor;
- (id)UUID;
- (id)copyWithZone:;
- (id)proximityUUID;
- (id)initWithProximityUUID:major:minor:proximity:accuracy:rssi:;
- (id)initWithUUID:major:minor:proximity:accuracy:rssi:timestamp:;
+ (BOOL)supportsSecureCoding;
@end
