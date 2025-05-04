@interface AWEIMSkylightCellAvatarComponent : AWEIMSkylightBaseComponent
@property (nonatomic) AWEIMSkylightBaseComponent displayingSubComponent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEIMComponentManager componentManager;
- (id)componentContext;
- (id)componentsNameArrayWithContext:;
- (void)setComponentManager:;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)onCellPrepareReuseForCurrentViewModel;
- (void)updateComponentAfterModelUpdate;
- (void)setDisplayingSubComponent:;
- (id)displayingSubComponent;
- (void)skyCellWillDisplay;
- (void)skyCellDidEndDisplay;
- (void)imUserDidChange;
- (void)stopAvatarAnimationIfNeed;
- (void)startAvatarAnimationIfNeed;
- (void)makeAvatarDecisionWithReload:;
- (id)avatarView;
- (void).cxx_destruct;
- (id)componentManager;
@end
