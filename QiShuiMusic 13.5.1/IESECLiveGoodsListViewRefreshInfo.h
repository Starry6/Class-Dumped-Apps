@interface IESECLiveGoodsListViewRefreshInfo : NSObject
@property (nonatomic) q refreshScene;
@property (nonatomic) q updateType;
@property (nonatomic) NSDictionary extraInfo;
- (long long)refreshScene;
- (void)setExtraInfo:;
- (void)setRefreshScene:;
- (long long)updateType;
- (void)setUpdateType:;
- (void).cxx_destruct;
- (id)extraInfo;
@end
