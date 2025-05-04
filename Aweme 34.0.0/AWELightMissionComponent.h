@interface AWELightMissionComponent : AWEUserDetailBaseComponent
@property (nonatomic) BOOL isParticipateMission;
- (void)setIsParticipateMission:;
- (BOOL)isParticipateMission;
- (BOOL)onConfigWithRouterParamDict:;
- (void)__destroyLightMissionModel;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (void)viewDidDisappear;
@end
