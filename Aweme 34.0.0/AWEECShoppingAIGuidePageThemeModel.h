@interface AWEECShoppingAIGuidePageThemeModel : MTLModel
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) AWEECShoppingAIGuideHomePageThemeModel homePageTheme;
@property (nonatomic) AWEECShoppingAIGuideHomePageThemeModel chatPageTheme;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)statusMsg;
- (void)setStatusMsg:;
- (id)homePageTheme;
- (id)chatPageTheme;
- (void)setHomePageTheme:;
- (void)setChatPageTheme:;
- (id)statusCode;
- (void).cxx_destruct;
- (void)setStatusCode:;
+ (id)homePageThemeJSONTransformer;
+ (id)chatPageThemeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
