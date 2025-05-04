@interface AWEXBridgeEccsSetMessageDataStorageMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString messageId;
@property (nonatomic) NSString messageClientId;
@property (nonatomic) NSString conversationId;
@property (nonatomic) NSString content;
@property (nonatomic) NSString customBizId;
@property (nonatomic) NSString userId;
@property (nonatomic) NSString pigeonBizType;
- (void)setPigeonBizType:;
- (id)pigeonBizType;
- (id)messageClientId;
- (id)customBizId;
- (void)setMessageClientId:;
- (void)setCustomBizId:;
- (id)userId;
- (id)content;
- (id)messageId;
- (void)setContent:;
- (void).cxx_destruct;
- (void)setUserId:;
- (id)conversationId;
- (void)setConversationId:;
- (void)setMessageId:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
