@interface AWEShowPlayletInsertAdCacheItem : NSObject
@property (nonatomic) AWEAwemeModel adModel;
@property (nonatomic) NSDate cacheDate;
@property (nonatomic) BOOL isBlockAd;
@property (nonatomic) NSObject page;
@property (nonatomic) BOOL hadInsert;
- (id)adModel;
- (void)setAdModel:;
- (BOOL)isBlockAd;
- (void)setIsBlockAd:;
- (BOOL)hadInsert;
- (void)setHadInsert:;
- (id)page;
- (void)setCacheDate:;
- (void).cxx_destruct;
- (void)setPage:;
- (id)cacheDate;
@end
