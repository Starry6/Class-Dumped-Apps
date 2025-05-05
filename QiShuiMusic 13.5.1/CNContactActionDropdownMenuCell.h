@interface CNContactActionDropdownMenuCell : CNContactActionCell
@property (nonatomic) CNContactActionDropdownMenuButton button;
@property (nonatomic) @? menuProvider;
@property (nonatomic) UIContextMenuInteraction contextMenuInteraction;
- (id)initWithStyle:reuseIdentifier:;
- (void)prepareForReuse;
- (void)setMenuProvider:;
- (id)contextMenuInteraction;
- (id)button;
- (void).cxx_destruct;
- (void)setButton:;
- (id)menuProvider;
@end
