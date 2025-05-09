@interface IESLiveCommentPanelNormalImp : IESLiveCommentPanelBaseImp
@property (nonatomic) UIView foldableTopContainer;
@property (nonatomic) IESLiveCommentIntentionsView intentionsView;
@property (nonatomic) BOOL topContainerIsFold;
@property (nonatomic) UIView<IESLivePrivilegeDanmakuSwitchProtocol> innerDanmakuSwitch;
@property (nonatomic) IESLiveCommentWidgetReplyMessageView replyMessageView;
@property (nonatomic) UIButton sendBtn;
@property (nonatomic) IESLiveCommentWidgetQuickEmojiView quickEmojiView;
@property (nonatomic) UIView paidDanmakuContainer;
@property (nonatomic) BOOL didPaidDanmakuTabShow;
@property (nonatomic) BOOL didIntentionsShow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sendBtn;
- (void)setupContainers;
- (void)inputView:preInput:currentText:;
- (void)animateDismissPanelWithCompletion:;
- (void)barrageSwitchChanged:;
- (BOOL)canShowReplyMessageViewWithModel:;
- (void)cleanReplyMessageInfoAndView;
- (void)clickPaidDanmakuEntry;
- (void)danmakuCancelAction;
- (void)detailAreaChange:withDetailView:;
- (BOOL)didIntentionsShow;
- (BOOL)didPaidDanmakuTabShow;
- (void)didSelectFusionEmojiWithEmoticonModel:;
- (void)didSelectIntentionEntryWithModel:;
- (void)expandEntryView:foldStatusWillChangeTo:;
- (id)foldableTopContainer;
- (void)foldableTopContainerHeightChangeFromHeight:toHeight:;
- (double)getExpandDetailAreaContainerHeight;
- (double)getInputViewExtraLeftSpace;
- (void)heightChangeWithOffset:;
- (id)innerDanmakuSwitch;
- (void)inputView:inputTextReachLimit:;
- (void)inputView:textDidChange:;
- (void)intentionsDidDisplayWithCount:;
- (id)intentionsView;
- (id)paidDanmakuContainer;
- (void)paidDanmakuViewDidShow:;
- (id)quickEmojiView;
- (id)replyMessageView;
- (void)replyView:heightChangeFrom:To:;
- (void)replyViewDidClose:;
- (void)setDidIntentionsShow:;
- (void)setDidPaidDanmakuTabShow:;
- (void)setFoldableTopContainer:;
- (void)setInnerDanmakuSwitch:;
- (void)setIntentionsView:;
- (void)setPaidDanmakuContainer:;
- (void)setQuickEmojiView:;
- (void)setReplyMessageView:;
- (void)setSendBtn:;
- (void)setTopContainerIsFold:;
- (void)setupCommentExpandEntrysView;
- (void)setupCommentWidgetQuickEmojiView;
- (void)setupInputView;
- (void)setupIntentionsView;
- (void)setupPaidDanmakuSwitch;
- (void)setupPaidDanmakuView;
- (void)setupPopupView;
- (void)setupQuickReplyContentView;
- (void)setupSendBtn;
- (void)setupSeparator;
- (void)showCommentPopupViewWithContent:preferredHeight:;
- (void)showPaidDanmakuContainer:;
- (void)showSendBtn:;
- (BOOL)skipOnceIntentionsForCommentEnterFrom:;
- (BOOL)topContainerIsFold;
- (void)keyboardWillShow:;
- (void)setDelegate:;
- (void)sendAction:;
- (id)delegate;
- (void)setupWidgets;
- (void).cxx_destruct;
- (void)setupConfig;
@end
