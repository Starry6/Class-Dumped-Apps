@interface AWEMVChannelFirstBigOtherSmallLayout : NSObject
@property (nonatomic) NSMutableArray starCardList;
@property (nonatomic) NSMutableArray horizontalCardList;
@property (nonatomic) AWEAwemeModel largeBannerModel;
@property (nonatomic) AWEDCFeedPageContext context;
@property (nonatomic) UIViewController<AWEDCFeedListViewControllerProtocol> container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mvPageContext;
- (id)createSectionViewModels:requestInfo:otherInfo:;
- (void)appendSectionViewModel:lastSectionViewModel:;
- (id)createSkeletonSectionViewModels;
- (id)horizontalCardList;
- (void)setHorizontalCardList:;
- (id)starCardList;
- (void)setLargeBannerModel:;
- (void)filterFirstBigOtherSmallCardVideo:isRefresh:;
- (id)largeBannerModel;
- (id)buildPlayerCardSectionViewModel;
- (id)appendSmallCardVideoWithLastSectionViewModel:;
- (void)setStarCardList:;
- (void)setContainer:;
- (id)container;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
