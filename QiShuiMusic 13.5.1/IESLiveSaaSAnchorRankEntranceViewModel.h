@interface IESLiveSaaSAnchorRankEntranceViewModel : NSObject
@property (nonatomic) BOOL didTrackEcommerce;
@property (nonatomic) BOOL didTrackHour;
@property (nonatomic) BOOL didTrackRegion;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) q currentEntranceViewType;
@property (nonatomic) q nextEntranceViewType;
@property (nonatomic) NSArray visibleEntranceArray;
@property (nonatomic) NSArray itemViewModels;
@property (nonatomic) IESLiveSaaSAnchorRankEntranceEcommerceViewModel ecommerceViewModel;
@property (nonatomic) IESLiveSaaSAnchorRankEntranceHourViewModel hourViewModel;
@property (nonatomic) RACSubject loopAnimationSubject;
@property (nonatomic) RACSignal loopAnimationSignal;
- (void)bindViewModel;
- (long long)currentEntranceViewType;
- (void)didFlipTo:;
- (void)didGetEntranceInfo:error:;
- (BOOL)didTrackEcommerce;
- (BOOL)didTrackHour;
- (BOOL)didTrackRegion;
- (id)ecommerceViewModel;
- (void)forceHideRank:hidden:;
- (id)hiddenEntranceViewModel;
- (id)hourViewModel;
- (id)initWithRoomModel:eventContext:isAnchor:componentContext:;
- (id)itemViewModels;
- (id)loopAnimationSignal;
- (id)loopAnimationSubject;
- (long long)nextEntranceViewType;
- (void)setCurrentEntranceViewType:;
- (void)setDidTrackEcommerce:;
- (void)setDidTrackHour:;
- (void)setDidTrackRegion:;
- (void)setEcommerceViewModel:;
- (void)setHourViewModel:;
- (void)setIsAnchor:;
- (void)setItemViewModels:;
- (void)setLoopAnimationSubject:;
- (void)setNextEntranceViewType:;
- (void)setVisibleEntranceArray:;
- (void)updateEntranceStatus:hidden:forceFlip:;
- (long long)visiableRankItemType;
- (id)visibleEntranceArray;
- (id)visibleEntranceViewModel;
- (void)dealloc;
- (BOOL)hidden;
- (BOOL)isAnchor;
- (void).cxx_destruct;
- (void)didReceiveMessage:;
- (void)setHidden:;
+ (long long)enumerateNextRankEntranceType:visibleEntranceArray:;
@end
