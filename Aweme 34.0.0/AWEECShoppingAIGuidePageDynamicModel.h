@interface AWEECShoppingAIGuidePageDynamicModel : MTLModel
@property (nonatomic) NSString statusMsg;
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) AWEECShoppingAIGuideHomePageDynamicModel homePageDynamic;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)statusMsg;
- (void)setStatusMsg:;
- (id)homePageDynamic;
- (void)setHomePageDynamic:;
- (id)statusCode;
- (void).cxx_destruct;
- (void)setStatusCode:;
+ (id)homePageDynamicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
