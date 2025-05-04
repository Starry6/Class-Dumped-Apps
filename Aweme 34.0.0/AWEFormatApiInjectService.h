@interface AWEFormatApiInjectService : HTSService
@property (nonatomic) AWEFormatIdToBotIdApi format2botIdApi;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)format2botIdApi;
- (void)getFormatIdWithBotId:completion:;
- (void)clearChatHistoryWithConversationId:botId:;
- (void)transferFormatManagePage:enterMethod:extra:;
- (void)setFormat2botIdApi:;
- (void).cxx_destruct;
@end
