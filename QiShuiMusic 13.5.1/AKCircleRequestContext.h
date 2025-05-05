@interface AKCircleRequestContext : NSObject
@property (nonatomic) NSString identityTokenValue;
@property (nonatomic) NSString heartbeatTokenValue;
@property (nonatomic) NSString pushToken;
@property (nonatomic) BOOL _notifyOfTimeout;
@property (nonatomic) AKCircleRequestPayload payload;
@property (nonatomic) BOOL waitForReply;
@property (nonatomic) double waitForReplyTimeout;
- (id)payload;
- (id)init;
- (void)setPayload:;
- (id)initWithCoder:;
- (id)pushToken;
- (void)setPushToken:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)waitForReply;
- (void)setWaitForReply:;
- (double)waitForReplyTimeout;
- (void)setWaitForReplyTimeout:;
- (id)identityTokenValue;
- (void)setIdentityTokenValue:;
- (id)heartbeatTokenValue;
- (void)setHeartbeatTokenValue:;
- (BOOL)_notifyOfTimeout;
- (void)set_notifyOfTimeout:;
+ (BOOL)supportsSecureCoding;
@end
