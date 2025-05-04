@interface AWESearchDiscussTabColorModel : MTLModel
@property (nonatomic) AWESearchDiscussTabCardColorThemeModel lightTheme;
@property (nonatomic) AWESearchDiscussTabCardColorThemeModel darkTheme;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)darkTheme;
- (id)lightTheme;
- (void)setLightTheme:;
- (void)setDarkTheme:;
- (void).cxx_destruct;
+ (id)darkThemeJSONTransformer;
+ (id)lightThemeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
