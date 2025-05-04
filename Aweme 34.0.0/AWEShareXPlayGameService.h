@interface AWEShareXPlayGameService : AWEShareCommonImpl
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showPanelWithXPlayGameModel:onViewController:;
- (id)shareXPlayGameStageWithHandler:;
- (long long)panelItemTypeWithChannelShareType:;
@end
