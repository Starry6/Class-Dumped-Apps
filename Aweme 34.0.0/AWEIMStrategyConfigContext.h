@interface AWEIMStrategyConfigContext : NSObject
@property (nonatomic) double parseVariablesCost;
@property (nonatomic) Q sceneType;
@property (nonatomic) Q diffSceneType;
@property (nonatomic) NSDictionary decisionDict;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) AWEIMConversationContext convContext;
- (id)convContext;
- (void)setConvContext:;
- (unsigned long long)diffSceneType;
- (void)setDiffSceneType:;
- (id)decisionDict;
- (void)setDecisionDict:;
- (double)parseVariablesCost;
- (void)setParseVariablesCost:;
- (void).cxx_destruct;
- (id)conversation;
- (void)setConversation:;
- (unsigned long long)sceneType;
- (void)setSceneType:;
@end
