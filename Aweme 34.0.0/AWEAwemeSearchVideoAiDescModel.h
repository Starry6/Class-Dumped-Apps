@interface AWEAwemeSearchVideoAiDescModel : MTLModel
@property (nonatomic) NSString content;
@property (nonatomic) NSString source;
@property (nonatomic) AWEAwemeSearchVideoAiDescPrefixModel prefix;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)prefix;
- (id)content;
- (void)setPrefix:;
- (void)setContent:;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
+ (id)prefixJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
