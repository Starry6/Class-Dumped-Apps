@interface AWETemplateDataListResponseModel : MTLModel
@property (nonatomic) q cursor;
@property (nonatomic) NSArray categoryModel;
@property (nonatomic) NSArray templateInfo;
@property (nonatomic) BOOL hasNext;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHasNext:;
- (id)templateInfo;
- (id)categoryModel;
- (void)setCategoryModel:;
- (long long)cursor;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)setTemplateInfo:;
- (BOOL)hasNext;
+ (id)categoryModelJSONTransformer;
+ (id)templateInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
