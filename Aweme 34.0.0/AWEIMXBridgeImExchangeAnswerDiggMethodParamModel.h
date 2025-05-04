@interface AWEIMXBridgeImExchangeAnswerDiggMethodParamModel : BDXBridgeModel
@property (nonatomic) BOOL isDigg;
@property (nonatomic) NSString conversationId;
@property (nonatomic) NSString uid;
@property (nonatomic) NSString msgId;
- (BOOL)isDigg;
- (void)setIsDigg:;
- (void)setUid:;
- (id)uid;
- (void).cxx_destruct;
- (id)conversationId;
- (id)msgId;
- (void)setConversationId:;
- (void)setMsgId:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
