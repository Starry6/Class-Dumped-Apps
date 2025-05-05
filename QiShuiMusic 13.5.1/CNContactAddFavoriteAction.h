@interface CNContactAddFavoriteAction : CNPropertyAction
@property (nonatomic) CNUIFavoritesEntryPicker favoritesEntryPicker;
@property (nonatomic) CNFavorites favorites;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (BOOL)canPerformAction;
- (void)performActionWithSender:;
- (void)favoritesEntryPicker:didPickEntry:;
- (id)menuProviderForContextMenuInteraction:;
- (id)initWithContact:propertyItems:favorites:;
- (void)_saveFavorite:;
- (id)favoritesEntryPicker;
- (void)setFavoritesEntryPicker:;
- (id)favorites;
@end
