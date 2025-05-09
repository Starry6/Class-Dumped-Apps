@interface TTColorMananger : NSObject
@property (nonatomic) NSDictionary colorInfoDic;
@property (nonatomic) NSDictionary approxiCalculatorInfoDic;
@property (nonatomic) NSMutableDictionary colorCaches;
@property (nonatomic) NSDictionary dayAndKeyMapper;
@property (nonatomic) <BDColorResourceProtocol> colorDataSource;
- (id)dayAndKeyMapper;
- (id)ttDarkGreyColor;
- (id)colorDataSource;
- (void)setColorCaches:;
- (id)_dm_colorWithColorString:;
- (id)_dm_getColorStringFromHexString:;
- (id)approxiCalculatorInfoDic;
- (id)colorCaches;
- (id)colorInfoDic;
- (id)colorNamesDictionary;
- (id)darkColorWithRed:green:blue:alpha:;
- (id)darkModeBundle;
- (id)darkModeDarkBundle;
- (id)darkModeLightBundle;
- (id)dmApproximateColorWithHexString:;
- (id)dmApproximateColorWithHexString:alpha:dmThemeMode:;
- (id)dmApproximateColorWithHexString:dmThemeMode:;
- (id)dmCalApproximateHexColorHelper:dmThemeMode:currentTraiCollection:;
- (id)dmColorNameWithRed:green:blue:alpha:;
- (id)dmColorWithCGColor:;
- (id)dmColorWithRed:green:blue:alpha:;
- (id)dmColorWithWhite:alpha:;
- (id)dmHexColorWithR:g:b:;
- (id)dmfilterValidHexString:;
- (void)setApproxiCalculatorInfoDic:;
- (void)setColorDataSource:;
- (void)setColorInfoDic:;
- (void)setDayAndKeyMapper:;
- (void)setupColorDataSource;
- (void)setupDefaultConfig;
- (id)ttCaches;
- (id)ttColorWithName:;
- (id)ttDarkColorHexValueWithName:;
- (id)ttDarkColorWithName:;
- (id)ttLightColorHexValueWithName:;
- (id)ttLightColorWithName:;
- (id)ttLightGreyColor;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)isCurrentDarkMode;
+ (BOOL)isDarkModeEnable;
+ (BOOL)isMainWindowCurrentDarkMode;
+ (BOOL)isRenderTintColorEnable;
+ (id)shareInstance;
@end
