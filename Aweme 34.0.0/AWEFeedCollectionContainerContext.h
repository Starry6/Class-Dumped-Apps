@interface AWEFeedCollectionContainerContext : AWEPageContext
@property (nonatomic) UIViewController<AWEDPlayerFeedViewControllerProtocol> playVideoViewController;
@property (nonatomic) AWEVideoDescriptionMaskLayerViewModel maskLayerViewModel;
@property (nonatomic) AWEVideoDescriptionPanelViewModel panelViewModel;
@property (nonatomic) AWEVideoRelatedContainerViewController relatedContainerViewController;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) AWEFeedCollectionContainerViewController containerViewController;
@property (nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> playInteractionContext;
@property (nonatomic) @ interactionViewController;
@property (nonatomic) AWEListDataController dataController;
@property (nonatomic) @? dataControllerChangedBlock;
@property (nonatomic) UICollectionView containerCollecitionView;
@property (nonatomic) AWEAwemeModel firstResponseModel;
@property (nonatomic) BOOL isFetchError;
@property (nonatomic) BOOL isLoadingMoreError;
@property (nonatomic) q dataState;
@property (nonatomic) BOOL haveNoMoreData;
@property (nonatomic) double loadingViewHeight;
@property (nonatomic) double singleFeedCoverGuideViewHeight;
@property (nonatomic) NSString justWatchedItemID;
@property (nonatomic) double headerContentHeight;
@property (nonatomic) double contentOffsetY;
@property (nonatomic) double contentViewTopOffsetY;
@property (nonatomic) double contentViewBottomOffsetY;
@property (nonatomic) BOOL isShowingSuspendView;
@property (nonatomic) BOOL isLongDesc;
@property (nonatomic) BOOL hasShowedGuideViewInSingleMode;
@property (nonatomic) BOOL isSingleMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)referString;
- (void)setDataState:;
- (void)setEnterFrom:;
- (void)setReferString:;
- (id)enterFrom;
- (void)setInteractionViewController:;
- (id)playVideoViewController;
- (void)setPlayVideoViewController:;
- (id)dataControllerChangedBlock;
- (void)setDataControllerChangedBlock:;
- (void)setDataController:;
- (id)playInteractionContext;
- (void)setPlayInteractionContext:;
- (double)contentOffsetY;
- (id)panelViewModel;
- (void)setContentOffsetY:;
- (void)updateContextWithAwemeModel:referString:enterFrom:playInteractionContext:interactionViewController:playVideoViewController:;
- (void)setFirstResponseModel:;
- (id)firstResponseModel;
- (void)setPanelViewModel:;
- (void)setJustWatchedItemID:;
- (id)justWatchedItemID;
- (BOOL)isFetchError;
- (void)setIsFetchError:;
- (void)updateContextWithAwemeModel:referString:playInteractionContext:interactionViewController:playVideoViewController:;
- (BOOL)isJustWatchedModel:;
- (double)singleFeedCoverGuideTitleOffset;
- (id)maskLayerViewModel;
- (void)setMaskLayerViewModel:;
- (id)relatedContainerViewController;
- (void)setRelatedContainerViewController:;
- (id)containerCollecitionView;
- (void)setContainerCollecitionView:;
- (BOOL)isLoadingMoreError;
- (void)setIsLoadingMoreError:;
- (BOOL)haveNoMoreData;
- (void)setHaveNoMoreData:;
- (double)loadingViewHeight;
- (void)setLoadingViewHeight:;
- (double)singleFeedCoverGuideViewHeight;
- (void)setSingleFeedCoverGuideViewHeight:;
- (double)headerContentHeight;
- (void)setHeaderContentHeight:;
- (double)contentViewTopOffsetY;
- (void)setContentViewTopOffsetY:;
- (double)contentViewBottomOffsetY;
- (void)setContentViewBottomOffsetY:;
- (BOOL)isShowingSuspendView;
- (void)setIsShowingSuspendView:;
- (BOOL)isLongDesc;
- (void)setIsLongDesc:;
- (BOOL)hasShowedGuideViewInSingleMode;
- (void)setHasShowedGuideViewInSingleMode:;
- (BOOL)isSingleMode;
- (void)setIsSingleMode:;
- (void)setModel:;
- (void)setContainerViewController:;
- (id)model;
- (id)containerViewController;
- (void).cxx_destruct;
- (id)dataController;
- (id)interactionViewController;
- (long long)dataState;
@end
