@interface AWEEcomSearchResultLoadMoreConfig : MTLModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q cursor;
@property (nonatomic) q shownCount;
@property (nonatomic) NSString ecomSearchPassThrough;
@property (nonatomic) q loadmorePreloadThreshold;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)shownCount;
- (void)setShownCount:;
- (long long)loadmorePreloadThreshold;
- (void)setLoadmorePreloadThreshold:;
- (id)ecomSearchPassThrough;
- (void)setEcomSearchPassThrough:;
- (void)fillMerchandiseResp:;
- (long long)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
