@interface AWESharePanelListTitleSection : NSObject
@property (nonatomic) <AWESharePanelListItem> item;
@property (nonatomic) <AWESharePanelListCellModel> cellModel;
@property (nonatomic) AWESharePanelTitleCell cell;
@property (nonatomic) NSMutableSet itemSets;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCellModel:;
- (void)setItemSets:;
- (id)itemSets;
- (void)reloadDataInSection;
- (id)tableView:cellForRow:;
- (id)cellModelForRow:;
- (void)setItem:;
- (long long)numberOfRows;
- (id)item;
- (void).cxx_destruct;
- (id)cell;
- (id)initWithItem:;
- (void)setCell:;
- (id)cellModel;
- (double)heightForRow:;
@end
