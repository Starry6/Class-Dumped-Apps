@interface CSJDynamicAppInfoModel : NSObject
@property (nonatomic) NSDictionary originDictionary;
@property (nonatomic) q aid;
@property (nonatomic) q themeStatus;
@property (nonatomic) NSString appName;
@property (nonatomic) NSString sdkEdition;
@property (nonatomic) NSArray supportList;
- (void)setThemeStatus:;
- (void)setSupportList:;
- (id)originDictionary;
- (id)sdkEdition;
- (void)setOriginDictionary:;
- (void)setSdkEdition:;
- (id)supportList;
- (long long)themeStatus;
- (id)initWithDictionary:;
- (void)setAppName:;
- (id)appName;
- (void).cxx_destruct;
- (BOOL)isDarkMode;
- (void)setAid:;
- (long long)aid;
@end
