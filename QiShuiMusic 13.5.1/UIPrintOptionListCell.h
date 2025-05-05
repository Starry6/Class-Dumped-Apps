@interface UIPrintOptionListCell : UIPrintOptionCell
@property (nonatomic) UIPrintOptionListViewController printOptionListViewController;
@property (nonatomic) <UIPrintOptionListDelegate> itemListDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)printOptionCellTapped;
- (id)itemListDelegate;
- (void)setItemListDelegate:;
- (id)printOptionListViewController;
- (void)setPrintOptionListViewController:;
@end
