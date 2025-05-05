@interface LiveRoomBannerPositionModel : IESLiveDynamicMTLModel
@property (nonatomic) IESLiveBannerListModel topLeft;
@property (nonatomic) IESLiveBannerListModel topRight;
@property (nonatomic) IESLiveBannerListModel bottomRight;
@property (nonatomic) IESLiveBannerListModel giftPanel;
@property (nonatomic) IESLiveBannerListModel giftPaneBottomRight;
@property (nonatomic) IESLiveBannerListModel openLive;
@property (nonatomic) IESLiveBannerListModel gameLiveMiddle;
@property (nonatomic) IESLiveBannerListModel activityTopRight;
@property (nonatomic) IESLiveBannerListModel activityVSInteract;
@property (nonatomic) IESLiveBannerListModel liveScene;
@property (nonatomic) IESLiveBannerListModel activityInteract;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)activityInteract;
- (void)setActivityInteract:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
