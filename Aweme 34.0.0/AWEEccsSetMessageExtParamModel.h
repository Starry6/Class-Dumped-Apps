@interface AWEEccsSetMessageExtParamModel : IESLiveBridgeModel
@property (nonatomic) NSString messageID;
@property (nonatomic) NSString conversationID;
@property (nonatomic) NSDictionary ext;
@property (nonatomic) NSString extType;
- (void)setExt:;
- (void)setExtType:;
- (id)extType;
- (id)messageID;
- (id)conversationID;
- (void)setMessageID:;
- (void).cxx_destruct;
- (void)setConversationID:;
- (id)ext;
+ (id)modelCustomPropertyMapper;
@end
