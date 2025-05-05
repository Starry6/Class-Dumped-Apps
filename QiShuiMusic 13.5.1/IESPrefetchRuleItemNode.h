@interface IESPrefetchRuleItemNode : NSObject
@property (nonatomic) NSString fragment;
@property (nonatomic) NSArray apis;
@property (nonatomic) NSArray queryNodes;
- (id)apis;
- (id)queryNodes;
- (void)setApis:;
- (void)setQueryNodes:;
- (void)setFragment:;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (id)fragment;
@end
