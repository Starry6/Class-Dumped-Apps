@interface AWEIMSkylightInteractComponent : AWEIMComponentBase
@property (nonatomic) AWEIMSkylightExclude exclude;
@property (nonatomic) <AWEIMSkylightViewInterface> skylightViewInterface;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)hostVC_viewWillDisappear;
- (void)didSelectedOtherStatusWithModel:;
- (void)p_didSelectBizCellWithModel:;
- (void)p_enterPrivateChatWithModel:showKeyboard:enterMethod:;
- (id)p_roomIdsFromDataSource;
- (void)p_updateHasEverPressedWithModel:;
- (void)didLongPressedAvatarWithCell:;
- (void)exclude:didDisableBizModel:;
- (void)didSelectItemCell:model:momentController:;
- (void)dismissLongPressMenu;
- (void)didSelectedChatWithModel:cell:;
- (id)skylightViewInterface;
- (void)setSkylightViewInterface:;
- (void).cxx_destruct;
- (id)exclude;
- (void)setExclude:;
+ (BOOL)canCreateComponentWithContext:;
+ (void)p_asyncGetIESConvFor1To1ChatWithConvId:completion:;
@end
