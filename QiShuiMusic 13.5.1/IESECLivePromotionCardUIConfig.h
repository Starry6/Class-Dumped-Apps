@interface IESECLivePromotionCardUIConfig : NSObject
@property (nonatomic) NSArray goodsListUIData;
@property (nonatomic) NSArray replayUIData;
@property (nonatomic) NSArray searchUIData;
@property (nonatomic) NSArray propertyUIData;
- (id)goodsListUIData;
- (id)getUIModelWithCardScene:;
- (id)goodsListCardUIConfig;
- (id)p_getLayoutDataWithModelArray:config:;
- (id)p_getUIModelWithDict:;
- (id)propertyUIData;
- (id)propertyViewUIConfig;
- (id)replayCardUIConfig;
- (id)replayUIData;
- (id)searchCardUIConfig;
- (id)searchUIData;
- (void)setGoodsListUIData:;
- (void)setPropertyUIData:;
- (void)setReplayUIData:;
- (void)setSearchUIData:;
- (void).cxx_destruct;
+ (id)shareUIConfig;
@end
