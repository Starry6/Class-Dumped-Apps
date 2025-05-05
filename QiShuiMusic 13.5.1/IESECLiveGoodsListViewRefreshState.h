@interface IESECLiveGoodsListViewRefreshState : NSObject
@property (nonatomic) IESECLiveGoodsListViewRefreshInfo refreshInfo;
@property (nonatomic) IESECLiveGoodsListPageModel listModel;
@property (nonatomic) q selectedIndex;
@property (nonatomic) NSArray items;
@property (nonatomic) BOOL hasPreviousPage;
@property (nonatomic) BOOL hasNextPage;
@property (nonatomic) NSError error;
- (void)setRefreshInfo:;
- (BOOL)hasPreviousPage;
- (id)refreshInfo;
- (void)setHasPreviousPage:;
- (void)setListModel:;
- (BOOL)hasNextPage;
- (id)items;
- (long long)selectedIndex;
- (void)setError:;
- (id)error;
- (id)listModel;
- (void)setItems:;
- (void).cxx_destruct;
- (void)setHasNextPage:;
- (void)setSelectedIndex:;
@end
