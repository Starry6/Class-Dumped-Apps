@interface IESLatchRuleItemNode : NSObject
@property (nonatomic) IESLatchAPITemplate apiTemplate;
@property (nonatomic) NSDictionary apis;
@property (nonatomic) NSArray queryNodes;
@property (nonatomic) NSDictionary apiPath;
@property (nonatomic) Q apiPathPattern;
- (void)setApiTemplate:;
- (id)apiPath;
- (unsigned long long)apiPathPattern;
- (id)apiTemplate;
- (id)apis;
- (id)queryNodes;
- (void)setApiPath:;
- (void)setApiPathPattern:;
- (void)setApis:;
- (void)setQueryNodes:;
- (id)jsonRepresentation;
- (void).cxx_destruct;
@end
