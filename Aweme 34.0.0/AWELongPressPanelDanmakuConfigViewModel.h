@interface AWELongPressPanelDanmakuConfigViewModel : AWELongPressPanelBaseViewModel
@property (nonatomic) Q fromScene;
- (unsigned long long)fromScene;
- (void)setFromScene:;
- (BOOL)needShow;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)needShowForScene:;
+ (BOOL)shouldShowDanmakuConfigWithAwemeModel:referString:enterFrom:;
+ (id)longPressPanelViewModel;
@end
