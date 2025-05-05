@interface IESECLiveGoodsListViewClickEvent : NSObject
@property (nonatomic) q areaType;
@property (nonatomic) q commodityClickAreaType;
@property (nonatomic) IESECLiveGoodsListItemViewModel item;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) IESECBTMModel btmModel;
- (id)btmModel;
- (long long)commodityClickAreaType;
- (void)setBtmModel:;
- (void)setCommodityClickAreaType:;
- (void)setExtraInfo:;
- (id)item;
- (void)setItem:;
- (void).cxx_destruct;
- (id)extraInfo;
- (long long)areaType;
- (void)setAreaType:;
@end
