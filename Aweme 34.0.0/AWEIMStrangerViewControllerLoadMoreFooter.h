@interface AWEIMStrangerViewControllerLoadMoreFooter : MJRefreshBackFooter
@property (nonatomic) YYLabel tipLabel;
@property (nonatomic) UIView<IESIMLoadingViewProtocol> loadingView;
@property (nonatomic) UILabel label;
@property (nonatomic) UIView innerLabel;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL showNoMoreDataText;
@property (nonatomic) NSString noMoreDataString;
@property (nonatomic) NSAttributedString noMoreDataAttributedString;
@property (nonatomic) <AWEIMStrangerViewControllerLoadMoreFooterProtocol> delegate;
@property (nonatomic) BOOL hasTrashConversations;
@property (nonatomic) BOOL hasCommonConversations;
@property (nonatomic) BOOL hiddenBottomTrashTip;
- (void)setNoMoreDataString:;
- (void)placeSubviews;
- (id)noMoreDataAttributedString;
- (void)setNoMoreDataAttributedString:;
- (void)setShowNoMoreDataText:;
- (void)scrollViewContentOffsetDidChange:;
- (void)scrollViewContentSizeDidChange:;
- (BOOL)showNoMoreDataText;
- (id)noMoreDataString;
- (void)setIsFirstAppear:;
- (BOOL)scrollViewContentHeightBiggerThanFrameHeight;
- (BOOL)scrollViewDidReachBottom;
- (BOOL)scrollViewDidScrollUp;
- (void)_startLoadingAnim;
- (void)_stopLoadingAnim;
- (id)getInnerLabel;
- (void)setInnerLabel:;
- (void)refreshFooter;
- (BOOL)hasTrashConversations;
- (BOOL)hasCommonConversations;
- (void)setHasTrashConversations:;
- (void)setHasCommonConversations:;
- (void)didClickHighLightText;
- (BOOL)hiddenBottomTrashTip;
- (void)configCommonAttributeText:;
- (void)setHiddenBottomTrashTip:;
- (void)showTipLabelOrNot;
- (void)setLabel:;
- (void)dealloc;
- (id)delegate;
- (void)setLoadingView:;
- (void)prepare;
- (void)_addObservers;
- (id)initWithFrame:;
- (void)applicationWillEnterForeground:;
- (id)loadingView;
- (id)label;
- (void)_removeObservers;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setState:;
- (void)setTipLabel:;
- (id)tipLabel;
- (BOOL)isFirstAppear;
- (id)innerLabel;
- (void)refreshState:;
@end
