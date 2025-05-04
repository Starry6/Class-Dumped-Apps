@interface AWESearchAIGCInputAgentActionModel : AWEBaseApiModel
@property (nonatomic) q actionType;
@property (nonatomic) NSString sendQuery;
@property (nonatomic) AWESearchAIGCInputAgentActionCreateInfo createInfo;
- (void)setCreateInfo:;
- (id)sendQuery;
- (void)setSendQuery:;
- (long long)actionType;
- (void)setActionType:;
- (void).cxx_destruct;
- (id)createInfo;
+ (id)createInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
