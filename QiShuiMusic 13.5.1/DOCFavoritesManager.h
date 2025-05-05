@interface DOCFavoritesManager : DOCItemCollectionObserver
@property (nonatomic) NSArray favoritedLocations;
@property (nonatomic) BOOL isGathering;
- (void)removeFavorite:completion:;
- (void)addFavorite:completion:;
- (BOOL)isGathering;
- (id)favoritedLocations;
- (void)insertFavorites:atIndex:completion:;
- (void)_reverseInsertAll:atIndex:completion:;
- (void)updateFavoritesRanksToMatchOrderedFavorites:completion:;
- (void)moveFavorite:toTargetIndex:completion:;
- (void)insertFavorite:atIndex:completion:;
- (void)redistributeRanksCompletion:;
- (id)_newlyComputedRanksForItems:;
- (void)favoriteItems:ranks:completion:;
- (void)runInMainThread:;
+ (id)sharedManager;
+ (id)favoritesCollection;
@end
