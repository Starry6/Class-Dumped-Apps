@interface AWEStarLinkModel : MTLModel
@property (nonatomic) AWEURLModel iconURLModel;
@property (nonatomic) NSString title;
@property (nonatomic) NSString webURL;
@property (nonatomic) NSString openURL;
@property (nonatomic) Q type;
@property (nonatomic) AWEOriginalAdModel originAdInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)originAdInfo;
- (void)setOpenURL:;
- (id)iconURLModel;
- (void)setIconURLModel:;
- (void)setOriginAdInfo:;
- (void)setWebURL:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (id)webURL;
- (void)setTitle:;
- (id)openURL;
+ (id)iconURLModelJSONTransformer;
+ (id)originAdInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
