@interface AWEPostPageTitleTemplateModel : MTLModel
@property (nonatomic) NSString key;
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSString type;
@property (nonatomic) NSString name;
@property (nonatomic) NSString tag;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithEffectModel:;
- (id)tag;
- (id)content;
- (void)setKey:;
- (void)setTag:;
- (id)key;
- (id)type;
- (void)setContent:;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (void)setName:;
- (id)name;
- (void)setTitle:;
+ (id)convertToContentBySdkExtra:;
+ (id)convertToTagByExtraInfo:;
+ (id)JSONKeyPathsByPropertyKey;
@end
