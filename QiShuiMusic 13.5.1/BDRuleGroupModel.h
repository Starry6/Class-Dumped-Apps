@interface BDRuleGroupModel : NSObject
@property (nonatomic) NSArray rawJsonArray;
@property (nonatomic) NSArray rules;
@property (nonatomic) NSString name;
@property (nonatomic) NSArray keys;
- (id)initWithArray:name:;
- (id)initWithArray:name:keys:;
- (id)initWithJsonArray:name:;
- (id)initWithJsonArray:name:keys:;
- (id)initWithMergeRuleGroupModelArray:;
- (id)jsonFormat;
- (void)loadCommandsAndEnableExecutor:;
- (id)rawJsonArray;
- (void)setRawJsonArray:;
- (id)keys;
- (void)setName:;
- (id)rules;
- (void)setRules:;
- (void)setKeys:;
- (void).cxx_destruct;
- (id)name;
@end
