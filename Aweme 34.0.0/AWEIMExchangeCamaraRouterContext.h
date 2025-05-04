@interface AWEIMExchangeCamaraRouterContext : NSObject
@property (nonatomic) NSString conversationId;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString entrance;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) AWEIMMessage message;
@property (nonatomic) <IESIMConversationProtocol> con;
@property (nonatomic) BOOL isFromIMDetail;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)setEntrance:;
- (id)con;
- (void)setCon:;
- (id)entrance;
- (id)initWithConversationId:enterFrom:entrance:;
- (void)setIsFromIMDetail:;
- (BOOL)isFromIMDetail;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
- (id)conversationId;
- (void)setConversationId:;
- (id)extraInfo;
- (void)setExtraInfo:;
@end
