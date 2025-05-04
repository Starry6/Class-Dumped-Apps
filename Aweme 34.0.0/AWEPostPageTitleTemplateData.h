@interface AWEPostPageTitleTemplateData : MTLModel
@property (nonatomic) NSString type;
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableArray items;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCategoryModel:;
- (id)items;
- (void)setItems:;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)itemsJSONTransformer;
+ (id)defaultData;
+ (id)defaultDataList;
+ (id)recommendDataMap;
+ (id)defaultDataJsonList;
+ (id)JSONKeyPathsByPropertyKey;
@end
