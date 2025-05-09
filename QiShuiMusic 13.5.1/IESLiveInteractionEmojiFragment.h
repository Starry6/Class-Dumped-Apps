@interface IESLiveInteractionEmojiFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveInteractionEmojiStore store;
@property (nonatomic) IESLiveInteractionEmojiAdapter adapter;
@property (nonatomic) IESLiveInteractionEmojiPanelView panelView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentCreate;
- (void)cancelCurrentInteractGiftAnimation:;
- (void)cancelEmojiAnimationIfNeedWithUser:;
- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (id)emojiContainerForUserID:;
- (BOOL)enableInteractGiftEmoji:;
- (BOOL)enableShowOthersPanel;
- (void)fetchEmojiList:emojiCategory:completion:;
- (void)handleInteractGiftPlayerHierarchy:;
- (void)hideEmojiPanel;
- (void)multiVideo3DGiftdidFinish;
- (void)muteSound:;
- (void)onGuestScrollBarDidScroll;
- (void)onSelfConnected:;
- (id)panelView;
- (void)remoteRoomDataReady:;
- (void)sendEmojiWithID:type:toUserID:requestPage:completion:;
- (void)sendInteractEmojiGift:baseDir:receivers:effect:from:;
- (void)sendInteractEmojiGift:baseDir:receivers:effect:from:startMP4Block:;
- (void)setPanelView:;
- (BOOL)shouldFilterForMessageList:;
- (void)showAudienceSettingPanel;
- (void)showPanelWithConfig:requestPage:;
- (void)setStore:;
- (id)adapter;
- (void).cxx_destruct;
- (id)store;
- (void)setAdapter:;
+ (BOOL)isMixed;
+ (BOOL)componentShouldActive:;
@end
