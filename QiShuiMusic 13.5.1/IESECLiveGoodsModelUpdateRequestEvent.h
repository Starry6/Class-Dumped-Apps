@interface IESECLiveGoodsModelUpdateRequestEvent : NSObject
@property (nonatomic) NSString apiPath;
@property (nonatomic) q promotionID;
@property (nonatomic) NSArray updateIndexPaths;
@property (nonatomic) NSArray items;
@property (nonatomic) NSDictionary extraRequestParams;
@property (nonatomic) NSDictionary extraInfo;
- (id)apiPath;
- (void)setPromotionID:;
- (id)extraRequestParams;
- (long long)promotionID;
- (void)setApiPath:;
- (void)setExtraInfo:;
- (void)setExtraRequestParams:;
- (void)setUpdateIndexPaths:;
- (id)updateIndexPaths;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
- (id)extraInfo;
@end
