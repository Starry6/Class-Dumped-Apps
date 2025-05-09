@interface AWEIMChatCellHintComponent : AWEIMChatCellComponentBase
@property (nonatomic) UIFont hintFont;
@property (nonatomic) AWEIMChatCellHintModel displayingHintModel;
@property (nonatomic) AWEIMChatCellHintViewModel hintVM;
@property (nonatomic) <AWEIMChatListHintProviderCellInterface> hintProviderService;
@property (nonatomic) <AWEIMChatListHintReloadHintInterface> reloadHintService;
@property (nonatomic) <AWEIMChatCellHintComponentAction> hintAction;
@property (nonatomic) IESIMReadStateDisplayTrackModel readStateTrackModel;
@property (nonatomic) <AWEIMChatCellMessageStateInterface> messageStateService;
@property (nonatomic) BOOL enableReadStateDisplayTrack;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)updateComponentWhenChatUpdate:;
- (void)onPresenter:willUpdateView:;
- (void)onCellWillRenderForCurrentComponent;
- (id)presenterForSnapshot;
- (BOOL)hintIsCompatibleWithMention;
- (BOOL)hintIsCompatibleWithTimeText;
- (BOOL)hintIsCompatibleWithSnapShot;
- (void)reloadHintType:;
- (id)hintFont;
- (id)displayingHintModel;
- (void)onCellDidClick:;
- (void)p_setupReadStateTracker;
- (void)setEnableReadStateDisplayTrack:;
- (BOOL)enableReadStateDisplayTrack;
- (void)setReadStateTrackModel:;
- (id)readStateTrackModel;
- (void)p_checkReadStateDisplayedOnScreen;
- (void)p_trackReadStateDisplayIfNeed;
- (BOOL)shouldTrackForDelayMessage:;
- (void)__updatePresenter;
- (void)setHintProviderService:;
- (void)setReloadHintService:;
- (void)setHintAction:;
- (void)setMessageStateService:;
- (id)hintProviderService;
- (void)__observeVM;
- (id)reloadHintService;
- (id)hintVM;
- (void)setHintVM:;
- (void)setDisplayingHintModel:;
- (void)__updateDisplayHintModel:oldHintModel:;
- (id)hintAction;
- (id)messageStateService;
- (void)setHintFont:;
- (void).cxx_destruct;
@end
