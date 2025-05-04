@interface AWEPzConfigModel : AWEBaseApiModel
@property (nonatomic) NSArray domainList;
- (id)domainList;
- (void)setDomainList:;
- (id)description;
- (void).cxx_destruct;
+ (id)domainListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
