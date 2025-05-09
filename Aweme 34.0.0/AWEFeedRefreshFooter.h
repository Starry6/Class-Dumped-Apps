@interface AWEFeedRefreshFooter : AWERefreshFooter
@property (nonatomic) BOOL needBounces;
@property (nonatomic) BOOL forbidTriggerLoadMore;
@property (nonatomic) BOOL triggerAtTracking;
@property (nonatomic) BOOL blackBackground;
@property (nonatomic) BOOL hideNoMoreText;
@property (nonatomic) UIColor textColor;
@property (nonatomic) UIFont textFont;
@property (nonatomic) YYLabel label;
@property (nonatomic) UIButton button;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) NSMutableDictionary stateTitles;
@property (nonatomic) NSMutableDictionary stateAttributedTitles;
@property (nonatomic) BOOL blackBackground;
@property (nonatomic) BOOL hideNoMoreText;
@property (nonatomic) BOOL adaptiveFontEnable;
@property (nonatomic) UIColor textColor;
@property (nonatomic) UIFont textFont;
@property (nonatomic) YYLabel label;
@property (nonatomic) UIButton button;
- (BOOL)hideNoMoreText;
- (void)placeSubviews;
- (void)setAdaptiveFontEnable:;
- (void)forceUpdateUI;
- (void)setHideNoMoreText:;
- (void)handleTapAction;
- (void)setIsFirstAppear:;
- (void)setStateTitles:;
- (id)stateTitles;
- (BOOL)scrollViewContentHeightBiggerThanFrameHeight:;
- (BOOL)scrollViewDidReachBottom:;
- (BOOL)scrollViewDidScrollUp:;
- (void)awetablist_containerPanStateDidChange:;
- (void)awetablist_containerContentOffsetDidChange:contentOffset:;
- (id)stateAttributedTitles;
- (void)_startLoadingAnim;
- (void)p_updateLabel;
- (void)_stopLoadingAnim;
- (BOOL)blackBackground;
- (BOOL)adaptiveFontEnable;
- (void)playAnimationForWeakNet;
- (void)setBlackBackground:;
- (void)setStateAttributedTitles:;
- (void)setUpScrollViewOriginInset:;
- (void)setLabel:;
- (void)dealloc;
- (id)textFont;
- (void)setLoadingView:;
- (void)prepare;
- (void)_addObservers;
- (id)initWithFrame:;
- (void)setButton:;
- (void)setAttributedTitle:forState:;
- (void)applicationWillEnterForeground:;
- (id)loadingView;
- (void)setTitle:forState:;
- (id)label;
- (void)_removeObservers;
- (void).cxx_destruct;
- (id)textColor;
- (void)setState:;
- (id)button;
- (BOOL)isFirstAppear;
@end
