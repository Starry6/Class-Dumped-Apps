@interface AWESharePanelListIMSection : NSObject
@property (nonatomic) <AWESharePanelListItem> item;
@property (nonatomic) <AWESharePanelListCellModel> cellModel;
@property (nonatomic) NSMutableSet itemSets;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCellModel:;
- (void)setItemSets:;
- (id)itemSets;
- (id)tableView:cellForRow:;
- (id)cellModelForRow:;
- (void)setItem:;
- (long long)numberOfRows;
- (id)item;
- (void).cxx_destruct;
- (id)initWithItem:;
- (id)cellModel;
- (double)heightForRow:;
@end
