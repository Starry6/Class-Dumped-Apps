@interface AWESearchAIGCInputAgentModel : AWEBaseApiModel
@property (nonatomic) NSString agentName;
@property (nonatomic) NSString agentIcon;
@property (nonatomic) NSString agentIconBlack;
@property (nonatomic) NSString agentMethod;
@property (nonatomic) AWESearchAIGCInputAgentActionModel actionModel;
@property (nonatomic) BOOL hasShown;
- (id)actionModel;
- (void)setActionModel:;
- (id)agentName;
- (void)setAgentName:;
- (id)agentIcon;
- (id)agentIconBlack;
- (void)setAgentIcon:;
- (void)setAgentIconBlack:;
- (id)agentMethod;
- (void)setAgentMethod:;
- (void).cxx_destruct;
- (BOOL)hasShown;
- (void)setHasShown:;
+ (id)actionModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
