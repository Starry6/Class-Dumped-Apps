@interface AWEMultiAccountDetailComponent : AWEUserDetailBaseComponent
@property (nonatomic) BOOL needShowQuickSwitch;
@property (nonatomic) BOOL isQuickSwitchAccountProduce;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)onConfigWithRouterParamDict:;
- (BOOL)isQuickSwitchAccountProduce;
- (BOOL)needShowQuickSwitch;
- (void)setNeedShowQuickSwitch:;
- (void)setIsQuickSwitchAccountProduce:;
- (void)viewDidAppear;
- (void)onInit;
@end
