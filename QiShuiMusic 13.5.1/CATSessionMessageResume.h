@interface CATSessionMessageResume : CATSessionMessage
@property (nonatomic) NSUUID sessionUUID;
@property (nonatomic) NSDictionary clientUserInfo;
- (void)setClientUserInfo:;
- (id)clientUserInfo;
- (id)sessionUUID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setSessionUUID:;
- (void).cxx_destruct;
- (id)initWithSessionUUID:;
+ (BOOL)supportsSecureCoding;
@end
