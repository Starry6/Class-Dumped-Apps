@interface AWEShareMixVideoService : AWEShareCommonImpl
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showPanelWithMixVideo:previousPage:pageType:currentVideo:onViewController:;
- (void)showPanelWithMixVideo:previousPage:pageType:currentVideo:onViewController:logExtraDict:;
- (void)showPanelWithMixVideo:sceneType:previousPage:pageType:currentVideo:onViewController:logExtraDict:;
- (id)contextFromMixVideo:pageType:;
- (id)statsSharePlaylistGameStage:;
- (id)statsShareMixVideoStage;
@end
