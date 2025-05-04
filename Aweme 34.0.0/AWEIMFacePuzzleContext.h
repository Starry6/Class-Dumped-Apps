@interface AWEIMFacePuzzleContext : NSObject
@property (nonatomic) q conversationShortId;
@property (nonatomic) NSString conversationId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) q serverMsgId;
@property (nonatomic) NSString shootWay;
@property (nonatomic) NSString paramsForActivity;
@property (nonatomic) NSString activityEnterFrom;
@property (nonatomic) NSDictionary routerParams;
- (int)conversationType;
- (void)setConversationType:;
- (void)setShootWay:;
- (id)shootWay;
- (id)routerParams;
- (long long)conversationShortId;
- (void)setConversationShortId:;
- (void)setRouterParams:;
- (void)setParamsForActivity:;
- (long long)serverMsgId;
- (id)paramsForActivity;
- (void)setServerMsgId:;
- (id)activityEnterFrom;
- (void)setActivityEnterFrom:;
- (void).cxx_destruct;
- (id)conversationId;
- (void)setConversationId:;
@end
