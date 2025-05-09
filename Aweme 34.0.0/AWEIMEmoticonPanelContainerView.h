@interface AWEIMEmoticonPanelContainerView : UIView
@property (nonatomic) AWEIMEmoticonPanelContext context;
@property (nonatomic) AWEIMEmoticonRootComponent rootComponent;
@property (nonatomic) <AWEIMEmoticonPanelBoxComponent> boxComponent;
@property (nonatomic) <AWEIMEmoticonTrackComponent> trackComponent;
@property (nonatomic) <AWEIMEmoticonActionComponent> actionComponent;
@property (nonatomic) <AWEIMEmoticonPanelSyncComponent> syncComponent;
@property (nonatomic) <AWEIMEmoticonDeleteSendComponent> deleteSendComponent;
@property (nonatomic) <AWEIMEmoticonTransitionComponent> transitionComponent;
@property (nonatomic) <AWEIMEmoticonTabDataComponent> tabDataComponent;
@property (nonatomic) BOOL firstLayoutOpt;
@property (nonatomic) BOOL isFirstLayouted;
@property (nonatomic) BOOL sendBtnEnabled;
@property (nonatomic) BOOL showStoreEntry;
@property (nonatomic) BOOL hideBottomView;
@property (nonatomic) UIVisualEffectView blurView;
@property (nonatomic) <AWEIMEmoticonKeyBoardDelegate> delegate;
@property (nonatomic) BOOL defaultThemeDeleteButtonEnable;
@property (nonatomic) NSDictionary commentAdditionalInfos;
@property (nonatomic) NSDictionary logExtraDic;
@property (nonatomic) q containerViewType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)logExtraDic;
- (void)setLogExtraDic:;
- (BOOL)sendBtnEnabled;
- (BOOL)defaultThemeDeleteButtonEnable;
- (void)setDefaultThemeDeleteButtonEnable:;
- (BOOL)showStoreEntry;
- (void)setShowStoreEntry:;
- (BOOL)hideBottomView;
- (void)setHideBottomView:;
- (id)commentAdditionalInfos;
- (long long)containerViewType;
- (id)initWithFrame:withThemeInfos:containerViewType:context:;
- (void)updateKeyboardFrame:;
- (void)onEmoticonViewAppear;
- (id)currentSelectedInfoModel;
- (id)currentSelectedPanelGestureRecognizers;
- (void)refreshBackgroundColorWhileHasBackground:;
- (void)scrollToUniqueId:animated:enterMethod:;
- (void)refreshVmojiIfNeeded;
- (void)emoticonViewDidChangeHiddenTo:;
- (void)setSendBtnEnabled:;
- (void)trackCommentRecommendGiphyShownIfNeeded;
- (void)reloadRecentlyUsed;
- (void)scrollToRecentThemeView;
- (void)trackCommentEmoticonThemeViewShownIfNeeded;
- (void)reloadThemeInfos:;
- (void)setCommentAdditionalInfos:;
- (void)scrollToUniqueId:animated:;
- (id)boxComponent;
- (id)syncComponent;
- (void)setBoxComponent:;
- (void)setSyncComponent:;
- (id)rootComponent;
- (void)setRootComponent:;
- (id)trackComponent;
- (void)setTrackComponent:;
- (id)deleteSendComponent;
- (void)setDeleteSendComponent:;
- (id)tabDataComponent;
- (void)setTabDataComponent:;
- (void)forceLayoutBoxView;
- (BOOL)firstLayoutOpt;
- (BOOL)isFirstLayouted;
- (void)setIsFirstLayouted:;
- (id)actionComponent;
- (void)setActionComponent:;
- (id)transitionComponent;
- (void)setTransitionComponent:;
- (void)setFirstLayoutOpt:;
- (id)delegate;
- (id)blurView;
- (void)setBlurView:;
- (void)setFrame:;
- (void)setBounds:;
- (void)setContext:;
- (void)setHidden:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)layoutSubviews;
- (id)context;
- (id)initWithFrame:context:;
@end
