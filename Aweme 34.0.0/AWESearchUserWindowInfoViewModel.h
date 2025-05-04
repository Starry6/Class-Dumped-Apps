@interface AWESearchUserWindowInfoViewModel : NSObject
@property (nonatomic) AWEDoubleColumnSearchMerchandiseUserInfoModel model;
@property (nonatomic) NSDictionary searchInfoDict;
@property (nonatomic) @? clickLiveRoomWithGoodsBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSearchInfoDict:;
- (id)searchInfoDict;
- (id)getSearchResultId;
- (void)setClickLiveRoomWithGoodsBlock:;
- (void)userAvatarImageTapped:;
- (void)enterWindowOrStore:;
- (void)trackClickWithButtonType:goodsModel:responder:;
- (void)adTrackStoreOrWindowWithEnterFrom:refer:label:adExtraData:;
- (void)userDescriptionLabelTapped:;
- (void)userNameLabelTapped:;
- (void)transferToProfile:;
- (void)tapRecommendReasonView;
- (id)clickLiveRoomWithGoodsBlock;
- (BOOL)isEnterFromShelfADWith:;
- (void)enterBreathInfoStore:;
- (void)trackClickUserShopAndStore:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
- (void)updateWithModel:;
@end
