@interface BDXBridgeSetContainerPageUI : BDXBridgeModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString titleColor;
@property (nonatomic) NSString navBarColor;
@property (nonatomic) NSString statusBarBgColor;
@property (nonatomic) q statusFontMode;
- (void)setNavBarColor:;
- (id)navBarColor;
- (void)setStatusBarBgColor:;
- (void)setStatusFontMode:;
- (id)statusBarBgColor;
- (long long)statusFontMode;
- (void)setTitleColor:;
- (void)setTitle:;
- (id)titleColor;
- (id)title;
- (void).cxx_destruct;
+ (id)statusFontModeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
