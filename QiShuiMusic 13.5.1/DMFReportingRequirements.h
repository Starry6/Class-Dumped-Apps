@interface DMFReportingRequirements : NSObject
@property (nonatomic) NSString reachableHostName;
@property (nonatomic) double updateCoalescenceInterval;
@property (nonatomic) BOOL requireActiveConnection;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)reachableHostName;
- (void)setReachableHostName:;
- (double)updateCoalescenceInterval;
- (void)setUpdateCoalescenceInterval:;
- (BOOL)requireActiveConnection;
- (void)setRequireActiveConnection:;
+ (BOOL)supportsSecureCoding;
@end
