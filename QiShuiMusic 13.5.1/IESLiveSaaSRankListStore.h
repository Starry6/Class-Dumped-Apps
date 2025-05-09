@interface IESLiveSaaSRankListStore : NSObject
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) IESLiveSaaSRankListApi ranklistApi;
@property (nonatomic) IESLiveSaaSRankListModel hourRankModel;
@property (nonatomic) IESLiveSaaSRankListModel regionModel;
@property (nonatomic) IESLiveSaaSRankListModel ecommerceModel;
@property (nonatomic) IESLiveSaaSRankListModel hourCustomModel;
@property (nonatomic) <IESLiveSaaSMessageOptimizeService> messageOptimizeService;
@property (nonatomic) NSNumber lastMessageCreateTime;
@property (nonatomic) NSString enterType;
@property (nonatomic) IESLiveSaaSAnchorRankEntranceViewModel entranceViewModel;
@property (nonatomic) <HTSLiveSaaSRankListReactions> reactions;
@property (nonatomic) Q tabType;
@property (nonatomic) IESLiveSaaSLiveRoomModel roomModel;
@property (nonatomic) IESLiveSaaSComponentContext componentContext;
@property (nonatomic) BOOL preferRegionTop;
@property (nonatomic) BOOL enableFansclub;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL supportRegionRank;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)preferRegionTop;
- (void)switchRanklist:;
- (void)clickBuyProduct;
- (id)hourCustomModel;
- (void)setRanklistApi:;
- (void)setRegionModel:;
- (unsigned long long)tabType;
- (void)updateEnterType;
- (void)clickAnchorCell:isSeats:;
- (void)clickGoldUser:;
- (void)clickSendGift;
- (id)componentContext;
- (void)didClickRewardDescription:;
- (void)didHideRankListPopupView;
- (void)didUpdateRoom:;
- (id)ecommerceModel;
- (BOOL)enableFansclub;
- (id)enterMethod;
- (id)entranceViewModel;
- (id)hourRankModel;
- (id)initWithRoomModel:componentContext:trackContext:;
- (id)lastMessageCreateTime;
- (id)mapContentOfMessage:;
- (id)messageOptimizeService;
- (void)p_delayUpdateRankMessage:;
- (void)p_updateRankMessage:;
- (id)produceTitleWith:;
- (id)ranklistApi;
- (id)regionModel;
- (void)requestHourCustomModel;
- (void)requestRankButtonEntryInfo;
- (void)requestRankListModelWithType:;
- (void)requestRegionTopModel;
- (void)requestTopAnchorModel;
- (void)requestTopEcommerceModel;
- (id)roomModel;
- (void)setComponentContext:;
- (void)setEcommerceModel:;
- (void)setEntranceViewModel:;
- (void)setHourCustomModel:;
- (void)setHourRankModel:;
- (void)setLastMessageCreateTime:;
- (void)setMessageOptimizeService:;
- (void)setPreferRegionTop:;
- (void)setRoomModel:;
- (void)setTabType:;
- (void)setTrackContext:;
- (BOOL)shouldDealWithRankMessage:isAnchor:isShowOptimizedHourlyRankText:;
- (void)stickerViewMoveEnd:;
- (void)stickerViewMoving:;
- (BOOL)supportRegionRank;
- (void)trackAnchorClick:atIndex:isSeats:;
- (id)trackContext;
- (void)trackLiveShow:model:;
- (void)trackRankEvent:params:;
- (void)trackShowRanklist;
- (BOOL)isAnchor;
- (void)setup;
- (void).cxx_destruct;
- (void)messageReceived:;
- (id)reactions;
- (id)enterType;
- (void)setEnterType:;
- (void)setReactions:;
+ (id)showType:;
@end
