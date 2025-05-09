@interface LynxUICollection : LynxUIListLoader
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL shouldUpdateDataSource;
@property (nonatomic) q scrollUpperThresholdItemCount;
@property (nonatomic) q scrollLowerThresholdItemCount;
@property (nonatomic) BOOL enableUpdateAnimation;
@property (nonatomic) Q cellUpdateAnimationType;
@property (nonatomic) BOOL needsVisibleCells;
@property (nonatomic) BOOL needsLayoutCompleteEvent;
@property (nonatomic) q numberOfColumns;
@property (nonatomic) double mainAxisGap;
@property (nonatomic) double crossAxisGap;
@property (nonatomic) q initialScrollIndex;
@property (nonatomic) q updatedScrollIndex;
@property (nonatomic) double pagingAlignFactor;
@property (nonatomic) double pagingAlignOffset;
@property (nonatomic) NSMutableArray listDelegates;
@property (nonatomic) BOOL fixedContentOffset;
@property (nonatomic) BOOL reloadAll;
@property (nonatomic) q bounceForbiddenDirection;
@property (nonatomic) LynxListAppearEventEmitter appearEventCourier;
@property (nonatomic) LynxListScrollEventEmitter scrollEventEmitter;
@property (nonatomic) LynxCollectionScroll scroll;
@property (nonatomic) LynxCollectionViewLayout layout;
@property (nonatomic) LynxCollectionDataSource dataSource;
@property (nonatomic) NSDictionary curComponents;
@property (nonatomic) NSDictionary diffResultFromTasm;
@property (nonatomic) NSDictionary listNoDiffInfo;
@property (nonatomic) BOOL noRecursiveLayout;
@property (nonatomic) BOOL forceReloadData;
@property (nonatomic) NSMutableDictionary listNativeStateCache;
@property (nonatomic) NSMutableDictionary initialFlushPropCache;
@property (nonatomic) q layoutOrientation;
@property (nonatomic) BOOL enableRtl;
@property (nonatomic) BOOL enableAsyncList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enableAsyncList;
- (void)setMainAxisGap:;
- (BOOL)forceReloadData;
- (void)setLowerThreshold:requestReset:;
- (void)setUpperThreshold:requestReset:;
- (void)addListDelegate:;
- (id)appearEventCourier;
- (id)attachedCellsArray;
- (void)autoScroll:withResult:;
- (long long)bounceForbiddenDirection;
- (BOOL)canConsumeGesture:;
- (unsigned long long)cellUpdateAnimationType;
- (void)clearContentOffsetContex;
- (double)crossAxisGap;
- (id)curComponents;
- (id)diffResultFromTasm;
- (void)enableAsyncList:requestReset:;
- (BOOL)enableRtl;
- (BOOL)enableUpdateAnimation;
- (void)eventDidSet;
- (BOOL)fixedContentOffset;
- (void)gestureDidSet;
- (double)getCellOffsetByIndex:;
- (BOOL)getGestureBorder:;
- (double)getMemberScrollX;
- (double)getMemberScrollY;
- (void)getScrollInfo:withResult:;
- (void)getVisibleCells:withResult:;
- (id)initialFlushPropCache;
- (BOOL)initialPropsFlushed:cacheKey:;
- (long long)initialScrollIndex;
- (void)invalidateLayoutAtIndexPath:newBounds:;
- (void)iosScrollsToTop:requestReset:;
- (BOOL)isNeedRenderComponents;
- (BOOL)isScrollContainer;
- (void)layoutDidFinished;
- (id)listDelegates;
- (id)listNativeStateCache;
- (id)listNoDiffInfo;
- (double)mainAxisGap;
- (void)markContentOffsetContext;
- (BOOL)needsLayoutCompleteEvent;
- (BOOL)needsVisibleCells;
- (BOOL)noRecursiveLayout;
- (BOOL)notifyParent;
- (void)onAsyncComponentLayoutUpdated:operationID:;
- (void)onComponentLayoutUpdated:;
- (void)onGestureScrollBy:;
- (void)onNodeReady;
- (double)pagingAlignFactor;
- (double)pagingAlignOffset;
- (void)performBatchUpdates:completion:animated:;
- (void)propsDidUpdate;
- (BOOL)reloadAll;
- (void)removeListDelegate:;
- (id)scrollBy:deltaY:;
- (void)scrollBy:withResult:;
- (id)scrollEventEmitter;
- (long long)scrollLowerThresholdItemCount;
- (void)scrollToIndex:withResult:;
- (void)scrollToPosition:withResult:;
- (long long)scrollUpperThresholdItemCount;
- (void)sendLayoutCompleteEvent;
- (void)setAppearEventCourier:;
- (void)setBounceForbiddenDirection:;
- (void)setBounces:requestReset:;
- (void)setCellUpdateAnimationType:;
- (void)setColumnCount:requestReset:;
- (void)setCrossAxisGap:;
- (void)setCurComponents:;
- (void)setCurComponents:requestReset:;
- (void)setDiffResultFromTasm:;
- (void)setEnableAdjustContentOfssetForSelfSizing:requestReset:;
- (void)setEnableAlignHeight:requestReset:;
- (void)setEnableAsyncList:;
- (void)setEnableNested:requestReset:;
- (void)setEnableRtl:;
- (void)setEnableRtl:requestReset:;
- (void)setEnableSticky:requestReset:;
- (void)setEnableUpdateAnimation:;
- (void)setFixOffsetFromStart:requestReset:;
- (void)setFixedContentOffset:;
- (void)setFixedContentOffset:requestReset:;
- (void)setForceReloadData:;
- (void)setForceReloadData:requestReset:;
- (void)setHorizontalLayout:requestReset:;
- (void)setIndexAsZIndex:requestReset:;
- (void)setInitialFlushPropCache:;
- (void)setInitialPropsHasFlushed:cacheKey:;
- (void)setInitialScrollIndex:;
- (void)setInitialScrollIndex:requestReset:;
- (void)setInitialScrollIndexIfNeeded;
- (void)setInternalCellAppearNotification:requestReset:;
- (void)setInternalCellDisappearNotification:requestReset:;
- (void)setInternalCellPrepareForReuseNotification:requestReset:;
- (void)setIosForbiddenSingleSidedBounce:requestReset:;
- (void)setListCrossAxisGap:requestReset:;
- (void)setListDelegates:;
- (void)setListMainAxisGap:requestReset:;
- (void)setListNativeStateCache:;
- (void)setListNoDiffInfo:;
- (void)setListType:requestReset:;
- (void)setLowerThresholdItemCount:requestReset:;
- (void)setNeedsLayoutCompleteEvent:;
- (void)setNeedsVisibleCells:;
- (void)setNeedsVisibleCells:requestReset:;
- (void)setNoRecursiveLayout:;
- (void)setNoRecursiveLayout:requestReset:;
- (void)setPageEnabled:requestReset:;
- (void)setPagingAlignFactor:;
- (void)setPagingAlignOffset:;
- (void)setPagingAlignment:requestReset:;
- (void)setReloadAll:;
- (void)setScroll:;
- (void)setScrollBarEnable:requestReset:;
- (void)setScrollEmitterHelper:requestReset:;
- (void)setScrollEnabled:requestReset:;
- (void)setScrollEventEmitter:;
- (void)setScrollEventThrottle:requestReset:;
- (void)setScrollLowerThresholdItemCount:;
- (void)setScrollUpperThresholdItemCount:;
- (void)setShouldRequestStateRestore:requestReset:;
- (void)setShouldUpdateDataSource:;
- (void)setSign:;
- (void)setStickyOffset:requestReset:;
- (void)setStickyWithBounces:requestReset:;
- (void)setTouchEnabled:requestReset:;
- (void)setUpdateAnimation:requestReset:;
- (void)setUpdateValidLayout:requestReset:;
- (void)setUpdatedScrollIndex:;
- (void)setUpdatedScrollIndex:requestReset:;
- (void)setUpperThresholdItemCount:requestReset:;
- (void)setUseOldSticky:requestReset:;
- (BOOL)shouldForceSendLowerThresholdEvent;
- (BOOL)shouldForceSendUpperThresholdEvent;
- (BOOL)shouldUpdateDataSource;
- (void)updateDataSource;
- (void)updateFrame:withPadding:border:margin:withLayoutAnimation:;
- (void)updateListActionInfo:requestReset:;
- (long long)updatedScrollIndex;
- (id)visibleCellArray;
- (void)visibleCellFirst:Last:;
- (id)contentOffset;
- (void)scrollViewDidEndDecelerating:;
- (void)setDataSource:;
- (void)setContentOffset:;
- (id)init;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)dealloc;
- (long long)numberOfColumns;
- (void)setNumberOfColumns:;
- (void)setLayout:;
- (void)setLayoutOrientation:;
- (void)scrollViewWillBeginDecelerating:;
- (id)hitTest:withEvent:;
- (void)scrollViewDidScroll:;
- (id)layout;
- (void)scrollViewWillBeginDragging:;
- (id)dataSource;
- (long long)layoutOrientation;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void).cxx_destruct;
- (void)scrollViewWillEndDragging:withVelocity:targetContentOffset:;
- (void)scrollViewDidEndScrollingAnimation:;
- (void)collectionView:didEndDisplayingCell:forItemAtIndexPath:;
- (id)createView;
- (void)frameDidChange;
- (id)scroll;
+ (id)__lynx_prop_config__2441;
+ (id)__lynx_prop_config__2482;
+ (id)__lynx_prop_config__2623;
+ (id)__lynx_prop_config__2724;
+ (id)__lynx_prop_config__2745;
+ (id)__lynx_prop_config__2886;
+ (id)__lynx_prop_config__2947;
+ (id)__lynx_prop_config__2988;
+ (id)__lynx_prop_config__3029;
+ (id)__lynx_prop_config__31110;
+ (id)__lynx_prop_config__31511;
+ (id)__lynx_prop_config__32312;
+ (id)__lynx_prop_config__35913;
+ (id)__lynx_prop_config__36614;
+ (id)__lynx_props_group_config__540;
+ (id)__lynx_ui_method_config__3120;
+ (id)__lynx_ui_method_config__3511;
+ (id)__lynx_ui_method_config__3602;
+ (id)__lynx_ui_method_config__3923;
+ (id)__lynx_ui_method_config__4365;
+ (id)__lynx_ui_method_config__4578;
@end
