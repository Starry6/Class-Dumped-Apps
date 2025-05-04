@interface AWEXBridgeEcEccsLynxErrorMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString errorCode;
@property (nonatomic) NSString errorMsg;
@property (nonatomic) NSString messageUUID;
@property (nonatomic) NSString cardId;
@property (nonatomic) NSString conversationId;
@property (nonatomic) NSDictionary extra;
- (void)setExtra:;
- (void)setErrorMsg:;
- (id)errorMsg;
- (void)setErrorCode:;
- (id)errorCode;
- (id)extra;
- (void).cxx_destruct;
- (id)messageUUID;
- (void)setMessageUUID:;
- (id)conversationId;
- (void)setConversationId:;
- (id)cardId;
- (void)setCardId:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
