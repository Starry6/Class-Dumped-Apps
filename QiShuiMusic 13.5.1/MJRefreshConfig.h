@interface MJRefreshConfig : NSObject
@property (nonatomic) NSString languageCode;
@property (nonatomic) NSString i18nFilename;
@property (nonatomic) NSBundle i18nBundle;
- (id)i18nBundle;
- (id)i18nFilename;
- (void)setI18nBundle:;
- (void)setI18nFilename:;
- (void)setLanguageCode:;
- (id)languageCode;
- (void).cxx_destruct;
+ (void)resetLanguageResourceCache;
+ (id)defaultConfig;
@end
