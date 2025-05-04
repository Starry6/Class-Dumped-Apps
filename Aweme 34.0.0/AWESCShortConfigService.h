@interface AWESCShortConfigService : NSObject
@property (nonatomic) NSDictionary uiSetting;
@property (nonatomic) BOOL isUISettingRequesting;
@property (nonatomic) NSCache blackInfoCache;
@property (nonatomic) NSCache onlyXsgCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)uiSetting;
- (void)fetchUIConfigIfNeeded;
- (BOOL)cachedBlackInfoWithItemID:;
- (void)setCacheOnlySupportXsg:itemID:;
- (void)fetchOnlySupportXsgWithItemID:completion:;
- (BOOL)cachedOnlySupportXsgWithItemID:;
- (void)fetchOnlySupportXsgWithItemIDArray:completion:;
- (void)fetchCastBlackInfosWithItemIDs:completion:;
- (BOOL)isUISettingRequesting;
- (void)setIsUISettingRequesting:;
- (void)setUiSetting:;
- (id)blackInfoCache;
- (id)onlyXsgCache;
- (void)setBlackInfoCache:;
- (void)setOnlyXsgCache:;
- (id)init;
- (void).cxx_destruct;
@end
