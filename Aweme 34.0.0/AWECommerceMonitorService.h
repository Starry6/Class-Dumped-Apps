@interface AWECommerceMonitorService : HTSService
@property (nonatomic) AWEAwemeModel curAwemeModel;
@property (nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> interactionViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setInteractionViewController:;
- (BOOL)blockAbnormalShowIfNeedWithAweme:componentView:contextBuilder:;
- (id)curAwemeModel;
- (void)setCurAwemeModel:;
- (BOOL)verifyIsAbnormalWithAweme:;
- (id)collectViewTree:terminalView:;
- (void)trackAbnormalAwemeEventWithContext:;
- (BOOL)componentsAbnormalShowCanBlock;
- (void)trackBlockComponentsShowEventWithContext:;
- (void)trackWithEvent:context:shouldSnap:;
- (void)sendSnapshotHookWithParams:aweme:;
- (void).cxx_destruct;
- (id)interactionViewController;
@end
