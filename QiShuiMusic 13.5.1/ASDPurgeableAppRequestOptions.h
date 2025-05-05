@interface ASDPurgeableAppRequestOptions : ASDRequestOptions
@property (nonatomic) BOOL performAvailablityCheck;
@property (nonatomic) BOOL skipLaunchCheck;
@property (nonatomic) q urgency;
@property (nonatomic) NSString volume;
- (long long)urgency;
- (id)volume;
- (void)setVolume:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setUrgency:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithVolume:urgency:;
- (BOOL)performAvailablityCheck;
- (void)setPerformAvailablityCheck:;
- (BOOL)skipLaunchCheck;
- (void)setSkipLaunchCheck:;
+ (BOOL)supportsSecureCoding;
@end
