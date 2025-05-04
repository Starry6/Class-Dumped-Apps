@interface AWEUserProfileSpecificationBottomTip : AWEUserProfileSpecificationTip
@property (nonatomic) NSString contentHtmlLight;
@property (nonatomic) NSString contentHtmlDark;
@property (nonatomic) AWEURLModel lightIcon;
@property (nonatomic) AWEURLModel darkIcon;
- (id)lightIcon;
- (id)darkIcon;
- (void)setLightIcon:;
- (void)setDarkIcon:;
- (id)contentHtmlLight;
- (id)contentHtmlDark;
- (void)setContentHtmlLight:;
- (void)setContentHtmlDark:;
- (void).cxx_destruct;
+ (id)darkIconJSONTransformer;
+ (id)lightIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
