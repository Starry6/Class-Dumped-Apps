@interface AWETemplateCategoryDataResponseModel : MTLModel
@property (nonatomic) q appID;
@property (nonatomic) NSString regionKey;
@property (nonatomic) q categoryID;
@property (nonatomic) NSString categoryName;
@property (nonatomic) NSString categoryUri;
@property (nonatomic) AWETemplateDataListResponseModel dataList;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataList:;
- (id)regionKey;
- (void)setRegionKey:;
- (id)categoryUri;
- (void)setCategoryUri:;
- (void)setCategoryID:;
- (long long)appID;
- (void)setAppID:;
- (void).cxx_destruct;
- (long long)categoryID;
- (id)categoryName;
- (void)setCategoryName:;
- (id)dataList;
+ (id)dataListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
