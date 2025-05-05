@interface IESPrefetchRuleNode : NSObject
@property (nonatomic) NSString ruleName;
@property (nonatomic) NSArray itemNodes;
- (id)itemNodes;
- (id)ruleName;
- (void)setItemNodes:;
- (void)setRuleName:;
- (id)jsonRepresentation;
- (void).cxx_destruct;
@end
