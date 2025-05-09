@interface AWEPOIDetailNGUGCComponentViewModel : DitoComponentViewModel
@property (nonatomic) AWEPOIDetailNGPageContext context;
@property (nonatomic) AWEPOIDetailNGUGCTrackShowConstraint trackShowConstraint;
@property (nonatomic) AWEPOIDetailAwemePlayerViewController awemePlayerForExpand;
@property (nonatomic) double containerWidth;
@property (nonatomic) AWEPOIFeedUgcItemModel itemModel;
@property (nonatomic) AWEPOIDetailFeedUgcCell playerCell;
@property (nonatomic) AWEPOIDetailNGUGCComponentView componentView;
@property (nonatomic) BOOL isAboveNPSCard;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q cellIndex;
@property (nonatomic) BOOL isFirst;
@property (nonatomic) BOOL isLast;
@property (nonatomic) q modelIndex;
@property (nonatomic) q awemeIndex;
@property (nonatomic) BOOL hasRemoved;
@property (nonatomic) BOOL hasTracked;
- (id)getAwemeModel;
- (id)itemModel;
- (void)setItemModel:;
- (id)rateId;
- (void)setIsFirst:;
- (void)setIsLast:;
- (id)poiDetail;
- (id)playerCell;
- (void)setPlayerCell:;
- (long long)awemeIndex;
- (void)setAwemeIndex:;
- (void)setHasRemoved:;
- (BOOL)hasRemoved;
- (id)componentReuseIdentifier;
- (void)bindStateAndAction;
- (id)componentSizeWithMaxWidth:;
- (void)pageView:didScroll:;
- (void)didHalfContainerStatusChange:state:;
- (void)vsdContainer:stateChange:;
- (id)constData;
- (id)generalContext;
- (void)componentViewDidCompleteShow;
- (id)syncFeedManager;
- (BOOL)hasAweme;
- (BOOL)canValidShow;
- (void)componentViewWillShow;
- (BOOL)hasDoRateDiggAction;
- (void)didTapActionButtonWithCellIndex:playState:;
- (BOOL)isAboveNPSCard;
- (void)waterfallCellNeedReload:;
- (id)paramsForUgcRateUserPageEntrance;
- (void)didTapSingleColumnVideoWithCell:;
- (void)didTapDeleteButtonWithRateID:rateTags:model:;
- (BOOL)canShowRateDiggHint;
- (id)rateDiggHintText;
- (BOOL)canShowRateDiggHintInLocalAndUpdate;
- (void)didTapReplyEntranceWithShowKeyboard:;
- (void)setIsAboveNPSCard:;
- (void)setTrackShowConstraint:;
- (id)trackShowConstraint;
- (void)recommendDishCollectUpdate:;
- (void)trackShowUgcCommentEvent:forInstantShow:completionBlock:;
- (id)awemePlayerForExpand;
- (void)setAwemePlayerForExpand:;
- (id)eventAttachedParams;
- (id)initWithNode:;
- (void).cxx_destruct;
- (long long)cellIndex;
- (BOOL)isFirst;
- (id)componentView;
- (BOOL)isLast;
- (void)setComponentView:;
- (BOOL)hasModel;
- (double)cellHeight;
- (void)autoPlay;
- (long long)modelIndex;
- (void)setModelIndex:;
- (void)setCellIndex:;
- (double)containerWidth;
- (void)setContainerWidth:;
@end
