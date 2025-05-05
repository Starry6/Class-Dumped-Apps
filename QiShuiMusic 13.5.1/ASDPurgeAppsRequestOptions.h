@interface ASDPurgeAppsRequestOptions : ASDRequestOptions
@property (nonatomic) NSArray apps;
@property (nonatomic) NSNumber desiredPurgeAmount;
@property (nonatomic) BOOL offloadOnly;
@property (nonatomic) BOOL performAvailablityCheck;
@property (nonatomic) q urgency;
@property (nonatomic) NSString volume;
- (long long)urgency;
- (id)volume;
- (void)setVolume:;
- (id)apps;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setUrgency:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (void)setApps:;
- (id)initWithVolume:urgency:;
- (BOOL)performAvailablityCheck;
- (void)setPerformAvailablityCheck:;
- (id)desiredPurgeAmount;
- (void)setDesiredPurgeAmount:;
- (BOOL)offloadOnly;
- (void)setOffloadOnly:;
+ (BOOL)supportsSecureCoding;
@end
