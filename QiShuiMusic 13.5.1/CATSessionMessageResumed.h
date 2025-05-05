@interface CATSessionMessageResumed : CATSessionMessage
@property (nonatomic) NSUUID sessionUUID;
@property (nonatomic) NSDictionary serverUserInfo;
@property (nonatomic) NSArray pendingRemoteTaskUUIDs;
- (id)pendingRemoteTaskUUIDs;
- (id)sessionUUID;
- (id)serverUserInfo;
- (void)setPendingRemoteTaskUUIDs:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setSessionUUID:;
- (void)setServerUserInfo:;
- (void).cxx_destruct;
- (id)initWithSessionUUID:;
+ (BOOL)supportsSecureCoding;
@end
