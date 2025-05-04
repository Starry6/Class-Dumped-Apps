@interface AWELegalEntityInfo : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString body;
@property (nonatomic) NSArray contentLinkList;
- (id)contentLinkList;
- (void)setContentLinkList:;
- (id)body;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setBody:;
+ (id)contentLinkListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
