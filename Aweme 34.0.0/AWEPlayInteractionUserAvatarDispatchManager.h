@interface AWEPlayInteractionUserAvatarDispatchManager : AWEBaseControllerManager
- (id)classNameArray;
- (void)loadControllersWithContainer:rootView:withContext:;
- (void)layoutBizControllerView;
- (void)controller_configAvatarView:;
- (void)interactionPlay;
- (void)viewDidLoad;
- (void)reset;
- (void)viewDidDisappear;
- (void)didEndDisplaying;
- (void)willDisplay;
@end
