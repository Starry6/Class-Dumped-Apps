@interface SiriAnalyticsXPCMessageEnvelope : NSObject
@property (nonatomic) Q timestamp;
@property (nonatomic) NSUUID streamUUID;
@property (nonatomic) q messageType;
@property (nonatomic) NSData messageBody;
- (long long)messageType;
- (id)streamUUID;
- (id)messageBody;
- (id)initWithCoder:;
- (id)initWithTimestamp:streamUUID:messageType:messageBody:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned long long)timestamp;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
