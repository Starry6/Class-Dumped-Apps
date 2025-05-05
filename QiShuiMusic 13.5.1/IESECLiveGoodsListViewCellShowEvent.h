@interface IESECLiveGoodsListViewCellShowEvent : NSObject
@property (nonatomic) IESECLiveGoodsListItemViewModel item;
@property (nonatomic) q viewType;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) IESECLiveGoodsListViewCellV2 sourceCell;
- (void)setExtraInfo:;
- (id)item;
- (long long)viewType;
- (id)sourceCell;
- (void)setItem:;
- (void).cxx_destruct;
- (void)setSourceCell:;
- (void)setViewType:;
- (id)extraInfo;
@end
