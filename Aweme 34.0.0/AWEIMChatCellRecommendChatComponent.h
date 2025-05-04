@interface AWEIMChatCellRecommendChatComponent : AWEIMChatCellComponentBase
@property (nonatomic) BOOL isDisplayingRecommendChatAction;
@property (nonatomic) NSString lightInteractionBtnTitle;
@property (nonatomic) BOOL contextRecommendEnable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)updateComponentWhenChatUpdate:;
- (void)onPresenter:willUpdateView:;
- (long long)currentComponentTailType;
- (void)cellTailDidUpdateWithType:;
- (void)didClickRecommendChatActionButton:;
- (void)AWEIMChatCellConsecutiveChatComponent_DidTappedConversaionId:;
- (id)lightInteractionBtnTitle;
- (void)setLightInteractionBtnTitle:;
- (BOOL)isDisplayingContextRecommend;
- (BOOL)isDisplayingRecommendChatAction;
- (void)setContextRecommendEnable:;
- (BOOL)contextRecommendEnable;
- (void)p_updateContextRecommendChatButtonStyle:;
- (void)p_clickLightInteractionBtnForCtxRecommend;
- (void)p_reloadTailComponent;
- (void)setIsDisplayingRecommendChatAction:;
- (void)p_shouldDisappearWithConversaionId:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
