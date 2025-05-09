@interface AWEStickerCategoryModel : NSObject
@property (nonatomic) BOOL enablePagingLoad;
@property (nonatomic) q fetchCount;
@property (nonatomic) q pageCount;
@property (nonatomic) BOOL isFirstPageLoading;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) Q loadState;
@property (nonatomic) NSArray totalList;
@property (nonatomic) NSArray lastList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL loading;
@property (nonatomic) BOOL loadFailed;
@property (nonatomic) IESCategoryModel categoryModel;
@property (nonatomic) <AWEStickerCategoryModelDelegate> delegate;
@property (nonatomic) <AWEStickerCategoryModelDataSource> dataSource;
@property (nonatomic) NSString panelName;
@property (nonatomic) NSString categoryIdentifier;
@property (nonatomic) NSString categoryKey;
@property (nonatomic) NSString categoryName;
@property (nonatomic) NSString categoryNameForTrack;
@property (nonatomic) NSArray normalIconUrls;
@property (nonatomic) BOOL favorite;
@property (nonatomic) BOOL isSearch;
@property (nonatomic) BOOL isDIY;
@property (nonatomic) BOOL shouldShowYellowDot;
@property (nonatomic) NSArray stickers;
@property (nonatomic) NSArray orignalStickers;
@property (nonatomic) BOOL enableSectionMode;
@property (nonatomic) NSArray sections;
@property (nonatomic) double cachedWidth;
@property (nonatomic) @? stickerFilterBlock;
@property (nonatomic) BOOL stickerListLoadFromCache;
@property (nonatomic) double stickerListStartTime;
- (void)loadMoreWithCompletion:;
- (id)normalIconUrls;
- (void)setCategoryKey:;
- (void)setNormalIconUrls:;
- (void)markAsReaded;
- (id)categoryKey;
- (BOOL)shouldShowYellowDot;
- (void)setLoadFailed:;
- (void)setStickerFilterBlock:;
- (BOOL)isHotTab;
- (id)categoryModel;
- (BOOL)enablePagingLoad;
- (id)categoryNameForTrack;
- (BOOL)enableSectionMode;
- (BOOL)hasLoadFailed;
- (void)loadStickerListIfNeeded;
- (id)initWithIESCategoryModel:;
- (void)setCategoryModel:;
- (id)totalList;
- (id)stickerFilterBlock;
- (BOOL)isStickerListLoadFromCache;
- (double)stickerListStartTime;
- (id)orignalStickers;
- (BOOL)isDIY;
- (id)pagingLoader;
- (void)setStickerListStartTime:;
- (void)setStickers:withFilter:;
- (void)postDidLoadStickersWithError:;
- (BOOL)isFirstPageLoading;
- (void)updateHasMore:sortingPosition:cursor:;
- (void)stickerCategoryPagingLoader:loadListWithPageCount:cursor:sortingPosition:completionHandler:;
- (void)stickerCategoryPagingLoader:didFinishLoadWithError:;
- (void)setCategoryNameForTrack:;
- (void)setEnableSectionMode:;
- (void)fetchFavorite;
- (void)fetchDIY;
- (void)fetchEffectList;
- (void)handleWithFavoirteEffectList:error:;
- (void)fetchFavoriteInternal;
- (void)handleDIYEffectList:customEffects:error:;
- (void)setStickerListLoadFromCache:;
- (void)handleWithEffectList:error:;
- (void)fetchEffectListInternal;
- (BOOL)isPropInCurrentCategory:;
- (void)setOrignalStickers:;
- (BOOL)favorite;
- (void)setCategoryIdentifier:;
- (id)categoryIdentifier;
- (long long)pageCount;
- (unsigned long long)loadState;
- (double)cachedWidth;
- (BOOL)isLoading;
- (id)category;
- (id)delegate;
- (id)sections;
- (BOOL)hasMore;
- (void)setFavorite:;
- (void)setSections:;
- (void).cxx_destruct;
- (void)setDataSource:;
- (void)setDelegate:;
- (id)lastList;
- (void)setLoading:;
- (id)dataSource;
- (id)copyWithZone:;
- (id)categoryName;
- (void)setCategoryName:;
- (void)setCachedWidth:;
- (BOOL)isSearch;
- (void)setIsSearch:;
- (id)stickers;
- (id)panelName;
- (void)setPanelName:;
- (long long)fetchCount;
- (void)setStickers:;
@end
