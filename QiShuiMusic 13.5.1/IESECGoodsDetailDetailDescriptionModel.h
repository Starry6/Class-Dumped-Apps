@interface IESECGoodsDetailDetailDescriptionModel : MTLModel
@property (nonatomic) NSArray contents;
@property (nonatomic) q UIType;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray links;
@property (nonatomic) BOOL expanded;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)UIType;
- (id)linksDict;
- (void)setUIType:;
- (id)content;
- (id)contents;
- (id)links;
- (void)setExpanded:;
- (void)setTitle:;
- (void)setContents:;
- (id)title;
- (void).cxx_destruct;
- (BOOL)expanded;
- (void)setLinks:;
+ (id)linksJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
