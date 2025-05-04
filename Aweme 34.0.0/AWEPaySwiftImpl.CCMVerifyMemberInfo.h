@interface AWEPaySwiftImpl.CCMVerifyMemberInfo : MTLModel
@property (nonatomic) NSString verifyURL;
@property (nonatomic) NSString verifyType;
@property (nonatomic) NSString verifyOrderNo;
@property (nonatomic) NSString verifyToken;
@property (nonatomic) NSString decisionID;
- (id)verifyURL;
- (void)setVerifyURL:;
- (id)verifyOrderNo;
- (void)setVerifyOrderNo:;
- (id)decisionID;
- (void)setDecisionID:;
- (id)verifyToken;
- (void)setVerifyToken:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setVerifyType:;
- (id)verifyType;
+ (id)JSONKeyPathsByPropertyKey;
@end
