@interface AWELongPressPanelClearScreenViewModel : AWELongPressPanelBaseViewModel
@property (nonatomic) Q fromScene;
- (BOOL)isInPureModePage;
- (unsigned long long)fromScene;
- (void)setFromScene:;
- (BOOL)isInClearScreen;
- (BOOL)needShow;
- (id)aAWEPlayInteractionAdapter;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (long long)getPureModeEntryPosition;
- (long long)getPureModeType;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (id)longPressPanelViewModel;
@end
