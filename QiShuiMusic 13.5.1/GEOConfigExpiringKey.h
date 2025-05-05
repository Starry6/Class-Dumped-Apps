@interface GEOConfigExpiringKey : NSObject
@property (nonatomic) NSString keyPath;
@property (nonatomic) NSDate expireTime;
@property (nonatomic) NSString expireOSVersion;
@property (nonatomic) BOOL expired;
- (BOOL)isExpired;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)keyPath;
- (void).cxx_destruct;
- (id)initWithKey:time:osVersion:;
- (BOOL)_isExpiredRelativeTo:osVersion:;
- (id)expireTime;
- (id)expireOSVersion;
+ (BOOL)supportsSecureCoding;
+ (id)expiringKey:withTime:osVersion:;
@end
