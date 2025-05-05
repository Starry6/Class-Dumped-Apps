@interface IESLiveAudioKTVThemePanelViewModel : IESLiveAudioThemePanelViewModel
- (void)deleteUGCImage:;
- (void)insertUGCImage:;
- (void)p_setupViewModelsWithThemeList:;
- (void)fetchListWithRoomId:scene:completion:;
- (void)fetchListWithScene:completion:;
- (double)itemRatio;
- (void)refreshPanelThemeList:scene:;
- (void)uploadButtonDidClick;
- (BOOL)uploadButtonHidden;
@end
