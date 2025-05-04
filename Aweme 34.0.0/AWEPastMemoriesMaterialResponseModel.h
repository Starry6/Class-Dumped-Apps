@interface AWEPastMemoriesMaterialResponseModel : MTLModel
@property (nonatomic) NSArray awemeModels;
@property (nonatomic) NSArray themeModels;
@property (nonatomic) q statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)statusMsg;
- (id)awemeModels;
- (void)setStatusMsg:;
- (void)setAwemeModels:;
- (void)setThemeModels:;
- (id)themeModels;
- (long long)statusCode;
- (void).cxx_destruct;
- (void)setStatusCode:;
+ (id)awemeModelsJSONTransformer;
+ (id)themeModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
