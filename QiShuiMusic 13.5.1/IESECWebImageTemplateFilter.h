@interface IESECWebImageTemplateFilter : MTLModel
@property (nonatomic) NSString pattern;
@property (nonatomic) q filterType;
@property (nonatomic) q groupIndex;
@property (nonatomic) NSString targetRule;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTargetRule:;
- (id)targetRule;
- (void)setFilterType:;
- (long long)filterType;
- (id)pattern;
- (long long)groupIndex;
- (void).cxx_destruct;
- (void)setPattern:;
- (void)setGroupIndex:;
+ (id)JSONKeyPathsByPropertyKey;
@end
