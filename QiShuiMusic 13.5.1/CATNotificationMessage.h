@interface CATNotificationMessage : CATMessage
@property (nonatomic) NSUUID taskUUID;
@property (nonatomic) NSString name;
@property (nonatomic) NSDictionary userInfo;
- (void)setName:;
- (id)userInfo;
- (id)taskUUID;
- (id)initWithName:userInfo:;
- (id)initWithCoder:;
- (void)setTaskUUID:;
- (void)encodeWithCoder:;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)name;
- (id)initWithTaskUUID:name:userInfo:;
+ (BOOL)supportsSecureCoding;
@end
