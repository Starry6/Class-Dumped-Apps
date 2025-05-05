@interface AVAudioSessionSpecification : NSObject
@property (nonatomic) Q sessionType;
@property (nonatomic) {?=[8I]} clientAuditToken;
@property (nonatomic) I sourceSessionID;
@property (nonatomic) NSString clientIdentifier;
- (unsigned long long)sessionType;
- (void)setSourceSessionID:;
- (void)setClientAuditToken:;
- (id)initWithCoder:;
- (id)clientAuditToken;
- (void)encodeWithCoder:;
- (unsigned int)sourceSessionID;
- (void).cxx_destruct;
- (void)setClientIdentifier:;
- (id)clientIdentifier;
- (void)setSessionType:;
+ (BOOL)supportsSecureCoding;
@end
