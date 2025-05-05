@interface CTStewieDeviceOrientationData : NSObject
@property (nonatomic) NSDate timestamp;
@property (nonatomic) BOOL targetLocked;
@property (nonatomic) BOOL isDeviceStationary;
@property (nonatomic) q x;
- (void)setX:;
- (id)initWithCoder:;
- (long long)x;
- (void)encodeWithCoder:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (id)timestamp;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)targetLocked;
- (void)setTargetLocked:;
- (BOOL)isDeviceStationary;
- (void)setIsDeviceStationary:;
+ (BOOL)supportsSecureCoding;
@end
