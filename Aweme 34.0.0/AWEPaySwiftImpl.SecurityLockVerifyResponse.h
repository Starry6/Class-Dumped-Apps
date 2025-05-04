@interface AWEPaySwiftImpl.SecurityLockVerifyResponse : MTLModel
@property (nonatomic) NSString code;
@property (nonatomic) NSString msg;
@property (nonatomic) NSString msgHint;
@property (nonatomic) _TtC15AWEPaySwiftImpl23SecurityLockServerExtra serverExtra;
@property (nonatomic) NSString verifyID;
@property (nonatomic) NSString verifyToken;
@property (nonatomic) NSString decisionID;
- (id)decisionID;
- (void)setDecisionID:;
- (id)msgHint;
- (void)setMsgHint:;
- (id)serverExtra;
- (void)setServerExtra:;
- (id)verifyToken;
- (void)setVerifyToken:;
- (id)verifyID;
- (void)setVerifyID:;
- (id)code;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setCode:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setMsg:;
- (id)msg;
+ (id)JSONKeyPathsByPropertyKey;
@end
