@interface WiFiAwareDataSessionIssueReport : NSObject
@property (nonatomic) NSNumber rtpSequenceNumber;
@property (nonatomic) NSNumber rtpStartTime;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)rtpSequenceNumberEquals:;
- (BOOL)rtpStartTimeEquals:;
- (id)rtpSequenceNumber;
- (void)setRtpSequenceNumber:;
- (id)rtpStartTime;
- (void)setRtpStartTime:;
+ (BOOL)supportsSecureCoding;
@end
