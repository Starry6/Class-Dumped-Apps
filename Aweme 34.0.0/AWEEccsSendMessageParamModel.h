@interface AWEEccsSendMessageParamModel : IESLiveBridgeModel
@property (nonatomic) NSString conversationID;
@property (nonatomic) NSString content;
@property (nonatomic) NSNumber messageType;
@property (nonatomic) NSDictionary ext;
@property (nonatomic) NSDictionary localExt;
@property (nonatomic) BOOL skipRealSend;
- (void)setExt:;
- (id)localExt;
- (void)setLocalExt:;
- (BOOL)skipRealSend;
- (void)setSkipRealSend:;
- (id)content;
- (id)conversationID;
- (void)setContent:;
- (void).cxx_destruct;
- (void)setMessageType:;
- (id)messageType;
- (void)setConversationID:;
- (id)ext;
+ (id)modelCustomPropertyMapper;
@end
