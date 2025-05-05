@interface BDSingleRuleResult : NSObject
@property (nonatomic) NSDictionary conf;
@property (nonatomic) NSString title;
@property (nonatomic) NSString key;
- (id)jsonFormat;
- (void)setConf:;
- (id)key;
- (void)setTitle:;
- (void)setKey:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)conf;
@end
