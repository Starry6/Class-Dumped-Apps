@interface AWETemplateFetchCategoriesResponseModel : MTLModel
@property (nonatomic) NSString message;
@property (nonatomic) q statusCode;
@property (nonatomic) NSArray categoryData;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)statusCode;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
- (void)setStatusCode:;
- (id)categoryData;
- (void)setCategoryData:;
+ (id)categoryDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
