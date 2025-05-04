@interface AWEUIThemeManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEUITheme currentTheme;
@property (nonatomic) BOOL imageNamedOptEnabled;
@property (nonatomic) NSDictionary imageBundleMap;
@property (nonatomic) BOOL colorPropertiesOptEnabled;
- (id)aAWEUserCenterModuleServiceCommonAdapter;
- (void)switchToTheme:;
- (BOOL)imageNamedOptEnabled;
- (void)awe_setCurrentTheme:;
- (void)setImageBundleMap:;
- (void)setColorPropertiesOptEnabled:;
- (id)imageBundleMap;
- (void)setImageNamedOptEnabled:;
- (BOOL)colorPropertiesOptEnabled;
- (id)currentTheme;
- (void).cxx_destruct;
+ (Class)aAWEUserCenterModuleServiceCommonAdapterClass;
+ (id)fetchDefatulTheme;
+ (void)createImageBundleMap:;
+ (id)fetchDefatulThemeDOUYINLiteAdapter;
+ (id)sharedInstance;
+ (BOOL)isLightTheme;
@end
