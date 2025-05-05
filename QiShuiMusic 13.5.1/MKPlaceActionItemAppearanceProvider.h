@interface MKPlaceActionItemAppearanceProvider : NSObject
- (void).cxx_destruct;
- (id)initWithActionType:dataProvider:;
- (id)bestTitleForDisplayStyle:;
- (id)_longTitle;
- (id)bestSymbolNameForDisplayStyle:;
- (id)_tableCellSymbol;
- (id)_menuSymbol;
- (id)_compactTitle;
- (BOOL)isDestructiveForDisplayStyle:;
- (BOOL)_isDestructiveForTableCell;
- (BOOL)_isDestructiveForMenu;
@end
