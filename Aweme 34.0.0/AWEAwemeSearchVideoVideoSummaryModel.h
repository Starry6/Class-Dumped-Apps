@interface AWEAwemeSearchVideoVideoSummaryModel : MTLModel
@property (nonatomic) AWEAwemeSearchVideoVideoSummaryPrefixModel prefix;
@property (nonatomic) NSString content;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)prefix;
- (id)content;
- (void)setPrefix:;
- (void)setContent:;
- (void).cxx_destruct;
+ (id)prefixJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
