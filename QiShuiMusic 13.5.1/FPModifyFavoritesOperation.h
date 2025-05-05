@interface FPModifyFavoritesOperation : FPTransformOperation
- (void).cxx_destruct;
- (id)fp_prettyDescription;
- (id)replicateForItems:;
- (unsigned long long)transformItem:atIndex:;
- (id)initWithItems:favoriteRanks:isUnfavorite:;
- (id)initWithItemsToFavorite:favoriteRanks:;
- (id)initWithItemsToUnfavorite:;
@end
