@interface IESPrefetchRuleQueryNode : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSString valueRegex;
- (void)setValueRegex:;
- (id)valueRegex;
- (id)jsonRepresentation;
- (id)key;
- (void)setKey:;
- (void).cxx_destruct;
@end
