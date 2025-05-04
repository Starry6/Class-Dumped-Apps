@interface AWEIMGroupEntryLimitsViewNonLimitContext : NSObject
@property (nonatomic) <AWEIMConversationFeatureConfigProtocol> featureConfig;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) BOOL allowAdvUserJoinStatus;
@property (nonatomic) BOOL allowAskPraiseUserJoinStatus;
@property (nonatomic) NSDictionary extra;
- (void)setExtra:;
- (BOOL)allowAdvUserJoinStatus;
- (BOOL)allowAskPraiseUserJoinStatus;
- (id)featureConfig;
- (void)setFeatureConfig:;
- (void)setAllowAdvUserJoinStatus:;
- (void)setAllowAskPraiseUserJoinStatus:;
- (id)extra;
- (void).cxx_destruct;
- (id)conversation;
- (void)setConversation:;
@end
