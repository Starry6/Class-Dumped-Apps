@interface BDRuleExecutor : NSObject
@property (nonatomic) BDRuleParameterFetcher fetcher;
@property (nonatomic) NSString uuid;
@property (nonatomic) NSMutableArray callBackModels;
- (id)__evaluateRule:;
- (id)__evaluateRules:execAllRules:;
- (id)callBackModels;
- (id)executeRule:;
- (id)executeRule:execAllRules:;
- (void)setCallBackModels:;
- (id)fetcher;
- (id)initWithParameters:;
- (id)uuid;
- (void)setUuid:;
- (void).cxx_destruct;
- (void)setFetcher:;
@end
