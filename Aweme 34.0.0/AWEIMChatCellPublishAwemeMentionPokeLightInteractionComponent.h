@interface AWEIMChatCellPublishAwemeMentionPokeLightInteractionComponent : AWEIMChatCellComponentBase
@property (nonatomic) NSString lightInteractionBtnTitle;
@property (nonatomic) BOOL isShowingLightInteractionBtn;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)updateComponentWhenChatUpdate:;
- (void)onPresenter:willUpdateView:;
- (long long)currentComponentTailType;
- (void)cellTailDidUpdateWithType:;
- (void)p_updatePokeLightInteractionButtonStyle;
- (BOOL)isShowingLightInteractionBtn;
- (void)setIsShowingLightInteractionBtn:;
- (void)didClickRecommendChatActionButton:;
- (void)onCellDidClick:;
- (id)lightInteractionBtnTitle;
- (void)setLightInteractionBtnTitle:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
