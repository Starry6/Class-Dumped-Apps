@interface AWEStickerCategoryFetchPageResponse : NSObject
@property (nonatomic) NSArray effectList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q cursor;
@property (nonatomic) q sortingPosition;
- (long long)sortingPosition;
- (void)setSortingPosition:;
- (long long)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (id)effectList;
- (void)setEffectList:;
@end
