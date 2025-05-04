@interface AWEXBridgeEcEccsCardCallActionMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString cardId;
@property (nonatomic) NSString messageUUID;
@property (nonatomic) NSString template;
@property (nonatomic) NSString data;
@property (nonatomic) NSString conversationId;
@property (nonatomic) NSDictionary eventParams;
- (void)setEventParams:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (id)messageUUID;
- (void)setMessageUUID:;
- (id)conversationId;
- (void)setConversationId:;
- (id)cardId;
- (void)setTemplate:;
- (id)template;
- (void)setCardId:;
- (id)eventParams;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
