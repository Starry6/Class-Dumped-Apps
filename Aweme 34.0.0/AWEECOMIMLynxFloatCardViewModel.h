@interface AWEECOMIMLynxFloatCardViewModel : AWEECOMIMLynxViewViewModel
@property (nonatomic) AWEECOMIMCharDetailFloatCardModel floatCardModel;
@property (nonatomic) <AWEECOMIMPaasConversationBridgeProtocol> conversation;
- (id)lynxCardSchema;
- (id)lynxScheme;
- (id)initWithFloatCardModel:conversation:;
- (id)floatCardModel;
- (id)_buildDynamicPatch;
- (id)_buildClientData;
- (BOOL)_bulletViewAlreadyInReusePool;
- (void)setFloatCardModel:;
- (void).cxx_destruct;
- (id)conversation;
- (void)setConversation:;
- (id)cardType;
@end
