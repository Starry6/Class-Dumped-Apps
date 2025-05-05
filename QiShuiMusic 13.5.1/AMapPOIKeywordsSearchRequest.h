@interface AMapPOIKeywordsSearchRequest : AMapPOISearchBaseRequest
@property (nonatomic) NSString cachedKey;
@property (nonatomic) NSString paramCompareString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString keywords;
@property (nonatomic) NSString city;
@property (nonatomic) BOOL cityLimit;
@property (nonatomic) AMapGeoPoint location;
- (id)checkParameters;
- (id)cacheCopy;
- (BOOL)cityLimit;
- (void)formattedCachedStringWithLanguage:;
- (BOOL)isSupportCache;
- (void)setCityLimit:;
- (id)city;
- (id)init;
- (void).cxx_destruct;
- (void)setCity:;
- (unsigned long long)cacheType;
- (id)requestPath;
- (id)cachedKey;
- (void)setCachedKey:;
+ (id)ajo_mapping;
@end
