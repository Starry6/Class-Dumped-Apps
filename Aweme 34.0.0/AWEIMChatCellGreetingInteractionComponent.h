@interface AWEIMChatCellGreetingInteractionComponent : AWEIMChatCellComponentBase
@property (nonatomic) BOOL enableDisplay;
@property (nonatomic) BOOL isShowingLightInteractionBtn;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)updateComponentWhenChatUpdate:;
- (void)onPresenter:willUpdateView:;
- (id)presenterForSnapshot;
- (long long)currentComponentTailType;
- (void)setEnableDisplay:;
- (void)cellTailDidUpdateWithType:;
- (BOOL)enableDisplay;
- (void)p_updatePokeLightInteractionButtonStyle;
- (BOOL)isShowingLightInteractionBtn;
- (void)setIsShowingLightInteractionBtn:;
- (void)didClickRecommendChatActionButton:;
- (void)onCellDidClick:;
+ (BOOL)canCreateComponentWithContext:;
+ (BOOL)p_canEnableShowGreetWithChat:;
+ (BOOL)p_canShowGreetWithChat:;
@end
