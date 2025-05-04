@interface AWEKnowledgeStateRuleManager : NSObject
@property (nonatomic) NSMutableDictionary tokenDic;
- (void)executeExpStr:withDataProvider:completion:;
- (id)tokenDic;
- (void)setTokenDic:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
