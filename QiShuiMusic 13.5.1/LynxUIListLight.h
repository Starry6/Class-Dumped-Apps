@interface LynxUIListLight : LynxUI
@property (nonatomic) LynxUIListDataSource dataSource;
@property (nonatomic) NSMutableArray reuseIdentifiers;
@property (nonatomic) NSMutableArray currentItemKeys;
@property (nonatomic) NSMutableArray fullSpanItems;
@property (nonatomic) NSMutableArray stickyTopItems;
@property (nonatomic) NSMutableArray stickyBottomItems;
@property (nonatomic) NSMutableArray fiberFullSpanItems;
@property (nonatomic) NSMutableArray fiberStickyTopItems;
@property (nonatomic) NSMutableArray fiberStickyBottomItems;
@property (nonatomic) NSMutableDictionary estimatedHeights;
@property (nonatomic) LynxUIListInvalidationContext currentNodiffContext;
@property (nonatomic) LynxUIListInvalidationContext generalPropsInfo;
@property (nonatomic) LynxListLayoutManager layout;
@property (nonatomic) LynxUIListScrollThresholds scrollThreSholds;
@property (nonatomic) NSNumber initialScrollIndex;
@property (nonatomic) NSDictionary listNoDiffInfo;
@property (nonatomic) NSDictionary diffResultFromTasm;
@property (nonatomic) NSDictionary curComponents;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentItemKeys;
- (void)setLowerThreshold:requestReset:;
- (void)setUpperThreshold:requestReset:;
- (id)curComponents;
- (id)currentNodiffContext;
- (id)diffResultFromTasm;
- (id)estimatedHeights;
- (id)fiberFullSpanItems;
- (id)fiberStickyBottomItems;
- (id)fiberStickyTopItems;
- (id)fullSpanItems;
- (id)generalPropsInfo;
- (id)initialScrollIndex;
- (id)listNoDiffInfo;
- (id)loadListInfo:components:;
- (void)onAsyncComponentLayoutUpdated:operationID:;
- (void)onComponentLayoutUpdated:;
- (void)onNodeReady;
- (void)propsDidUpdate;
- (void)registerAllReuseIdentifiers:;
- (id)scrollThreSholds;
- (void)scrollToPosition:withResult:;
- (void)setAnchorAlignToBottom:requestReset:;
- (void)setAnchorPriorityFromBegin:requestReset:;
- (void)setAnchorVisibility:requestReset:;
- (void)setColumnCount:requestReset:;
- (void)setCurComponents:;
- (void)setCurComponents:requestReset:;
- (void)setCurrentNodiffContext:;
- (void)setDeleteRegressPolicyToTop:requestReset:;
- (void)setDiffResultFromTasm:;
- (void)setEnableFadeInAnimation:requestReset:;
- (void)setGeneralPropsInfo:;
- (void)setInitialScrollIndex:;
- (void)setInitialScrollIndex:requestReset:;
- (void)setInsertAnchorModeInside:requestReset:;
- (void)setInternalCellPrepareForReuseNotification:requestReset:;
- (void)setListCrossAxisGap:requestReset:;
- (void)setListMainAxisGap:requestReset:;
- (void)setListNoDiffInfo:;
- (void)setListType:requestReset:;
- (void)setLowerThresholdItemCount:requestReset:;
- (void)setNeedsVisibleCells:requestReset:;
- (void)setPreloadBuffer:requestReset:;
- (void)setReuseIdentifiers:;
- (void)setScrollEventThrottle:requestReset:;
- (void)setScrollThreSholds:;
- (void)setSign:;
- (void)setUpdateAnimationFadeInDuration:requestReset:;
- (void)setUpperThresholdItemCount:requestReset:;
- (void)setVerticalOrientation:;
- (void)setVerticalOrientation:requestReset:;
- (id)stickyBottomItems;
- (id)stickyTopItems;
- (void)transformExtraData;
- (void)updateFrame:withPadding:border:margin:withLayoutAnimation:;
- (void)updateListActionInfo:;
- (void)updateListActionInfo:requestReset:;
- (void)setDataSource:;
- (void)setLayout:;
- (id)hitTest:withEvent:;
- (id)layout;
- (id)dataSource;
- (void).cxx_destruct;
- (BOOL)isAsync;
- (id)reuseIdentifiers;
- (void)insertChild:atIndex:;
- (id)createView;
+ (id)__lynx_prop_config__561;
+ (id)__lynx_prop_config__902;
+ (id)__lynx_props_group_config__370;
+ (id)__lynx_ui_method_config__3530;
@end
