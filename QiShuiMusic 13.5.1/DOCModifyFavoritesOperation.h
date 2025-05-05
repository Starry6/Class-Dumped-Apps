@interface DOCModifyFavoritesOperation : FPModifyFavoritesOperation
@property (nonatomic) NSArray oldFavorites;
@property (nonatomic) NSArray oldRanks;
@property (nonatomic) NSArray updatedRanks;
@property (nonatomic) BOOL isUnfavorite;
@property (nonatomic) DOCUndoManager undoManager;
@property (nonatomic) NSString actionNameForUndoing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)undoManager;
- (id)operationForRedoing;
- (id)operationForUndoing;
- (void)registerUndo;
- (id)actionNameForUndoing;
- (id)initWithItemsToFavorite:favoriteRanks:undoManager:;
- (id)initWithItemsToUnfavorite:undoManager:;
- (id)currentFavorites;
- (id)currentFavoriteRanks;
- (id)favoriteRanksFromItems:;
- (id)oldRanksForOperationItems;
- (id)oldFavorites;
- (id)oldRanks;
- (id)updatedRanks;
- (BOOL)isUnfavorite;
@end
