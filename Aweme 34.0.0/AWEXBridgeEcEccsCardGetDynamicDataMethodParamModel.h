@interface AWEXBridgeEcEccsCardGetDynamicDataMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString messageUUID;
@property (nonatomic) NSString cardId;
@property (nonatomic) NSString conversationId;
@property (nonatomic) NSDictionary body;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSDictionary header;
- (id)header;
- (id)body;
- (void).cxx_destruct;
- (id)params;
- (id)messageUUID;
- (void)setHeader:;
- (void)setBody:;
- (void)setMessageUUID:;
- (id)conversationId;
- (void)setConversationId:;
- (id)cardId;
- (void)setParams:;
- (void)setCardId:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
