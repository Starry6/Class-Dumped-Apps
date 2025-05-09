@interface IESECPagerView : UIView
@property (nonatomic) IESECPagerViewMainScrollView mainScrollView;
@property (nonatomic) UIView headerView;
@property (nonatomic) UIView tabbarView;
@property (nonatomic) UIView headerContainerView;
@property (nonatomic) IESECSlidingTabContainerView tabContainerView;
@property (nonatomic) BOOL canMainScrollViewScroll;
@property (nonatomic) UIScrollView currentTabScrollView;
@property (nonatomic) NSMutableDictionary delegateHeightCacheDict;
@property (nonatomic) NSMutableDictionary scrollViewContentOffsetYDict;
@property (nonatomic) @? scrollToPercentCompletion;
@property (nonatomic) <IESECPagerViewDataSource> dataSource;
@property (nonatomic) <IESECPagerViewDelegate> delegate;
@property (nonatomic) double currentContentOffsetY;
@property (nonatomic) double minContentOffsetY;
@property (nonatomic) double middleContentOffsetY;
@property (nonatomic) double maxContentOffsetY;
@property (nonatomic) double bizScrollPercent;
@property (nonatomic) double extendedScrollInset;
@property (nonatomic) BOOL disableSyncScroll;
@property (nonatomic) BOOL disableDeforceAtMiddle;
@property (nonatomic) BOOL disableDeforceAtMin;
@property (nonatomic) BOOL autoScroll;
@property (nonatomic) BOOL disableAutoScrollMiddle;
@property (nonatomic) double autoScrollPercentage;
@property (nonatomic) BOOL allowedDragdown;
@property (nonatomic) BOOL adjustHeaderWhenDragdown;
@property (nonatomic) BOOL ignoreTabScrollViewDidScroll;
@property (nonatomic) BOOL forwardHitTest;
@property (nonatomic) BOOL maxContentOffsetNonNegativeRestriction;
@property (nonatomic) BOOL receiveAllEvents;
@property (nonatomic) @? bizScrollPercentBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)allowedDragdown;
- (double)p_scrollViewLastContentOffsetY:;
- (void)__reloadDataWithNeedReloadHeader:completion:;
- (void)adjustHeaderContainerView:;
- (BOOL)adjustHeaderWhenDragdown;
- (BOOL)autoScroll;
- (double)autoScrollPercentage;
- (double)bizScrollPercent;
- (id)bizScrollPercentBlock;
- (BOOL)canMainScrollViewScroll;
- (double)currentContentOffsetY;
- (id)currentTabScrollView;
- (void)deforceAtMiddleIfNeeded;
- (void)deforceAtMinIfNeeded;
- (id)delegateHeightCacheDict;
- (BOOL)disableAutoScrollMiddle;
- (BOOL)disableDeforceAtMiddle;
- (BOOL)disableDeforceAtMin;
- (BOOL)disableSyncScroll;
- (double)extendedScrollInset;
- (BOOL)forwardHitTest;
- (BOOL)ignoreTabScrollViewDidScroll;
- (BOOL)maxContentOffsetNonNegativeRestriction;
- (double)maxContentOffsetY;
- (double)middleContentOffsetY;
- (double)minContentOffsetY;
- (void)p_autoScrollWithScrollView:;
- (double)p_mainScrollViewMaxContentOffsetY;
- (double)p_mainScrollViewMiddleContentOffsetY;
- (double)p_mainScrollViewMinContentOffsetY;
- (void)p_reloadHeaderView;
- (void)p_reloadHeightCacheDict;
- (void)p_reloadTabContainerView;
- (void)p_reloadTabbarView;
- (void)p_reloadViewConstraints;
- (double)p_scrollViewMinContentOffsetY:;
- (void)p_setMainScrollViewToLastContentOffsetY;
- (void)p_setMainScrollViewToMaxContentOffsetY;
- (void)p_setMainScrollViewToMinContentOffsetY;
- (void)p_setScrollViewToLastContentOffsetY:;
- (void)p_setTabScrollViewToMinContentOffsetY:;
- (double)p_tabContainerViewHeight;
- (double)p_tabContainerViewMinHeight;
- (double)p_totalHeaderHeight;
- (BOOL)receiveAllEvents;
- (void)refreshHeader;
- (void)reloadTabContainerWithCompletion:;
- (void)scrollToContentOffsetY:animated:completion:;
- (void)scrollToPercent:animated:completion:;
- (id)scrollToPercentCompletion;
- (id)scrollViewContentOffsetYDict;
- (void)setAdjustHeaderWhenDragdown:;
- (void)setAllowedDragdown:;
- (void)setAutoScroll:;
- (void)setAutoScrollPercentage:;
- (void)setBizScrollPercentBlock:;
- (void)setCanMainScrollViewScroll:;
- (void)setCurrentTabScrollView:;
- (void)setDelegateHeightCacheDict:;
- (void)setDisableAutoScrollMiddle:;
- (void)setDisableDeforceAtMiddle:;
- (void)setDisableDeforceAtMin:;
- (void)setDisableSyncScroll:;
- (void)setExtendedScrollInset:;
- (void)setForwardHitTest:;
- (void)setIgnoreTabScrollViewDidScroll:;
- (void)setMaxContentOffsetNonNegativeRestriction:;
- (void)setReceiveAllEvents:;
- (void)setScrollToPercentCompletion:;
- (void)setScrollViewContentOffsetYDict:;
- (void)setTabContainerView:;
- (void)setTabbarView:;
- (void)tabContainer:cancelMoveToIndex:withTabElement:;
- (void)tabContainer:didMoveToIndex:withTabElement:;
- (id)tabContainer:tabViewElementForIndex:;
- (void)tabContainer:willMoveToIndex:withTabElement:;
- (id)tabContainerView;
- (void)tabScrollViewDidScroll:;
- (id)tabbarView;
- (void)updateViewsHeightAnimated:;
- (void)reloadData;
- (void)scrollViewDidEndDecelerating:;
- (void)setHeaderView:;
- (void)setDataSource:;
- (void)layoutSubviews;
- (BOOL)pointInside:withEvent:;
- (void)setDelegate:;
- (id)headerView;
- (id)hitTest:withEvent:;
- (void)scrollViewDidScroll:;
- (id)initWithFrame:;
- (void)scrollViewWillBeginDragging:;
- (id)dataSource;
- (id)delegate;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:;
- (id)mainScrollView;
- (void)setMainScrollView:;
- (id)headerContainerView;
- (void)setHeaderContainerView:;
- (void)reloadDataWithCompletion:;
@end
