@interface IESECLiveGoodsListViewCellClickEvent : NSObject
@property (nonatomic) IESECLiveGoodsListItemViewModel item;
@property (nonatomic) q clickAreaType;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) @? completion;
@property (nonatomic) IESECLiveGoodsListViewCellV2 sourceCell;
@property (nonatomic) IESECBTMModel btmModel;
- (id)btmModel;
- (long long)clickAreaType;
- (void)setBtmModel:;
- (void)setClickAreaType:;
- (void)setExtraInfo:;
- (id)completion;
- (id)item;
- (void)setCompletion:;
- (id)sourceCell;
- (void)setItem:;
- (void).cxx_destruct;
- (void)setSourceCell:;
- (id)extraInfo;
@end
