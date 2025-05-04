@interface AWETeenGeneralSingleVideoSectionController : AWETeenGeneralBaseSectionController
@property (nonatomic) AWETeenGeneralVideoCardModel model;
- (id)cellForItemAtIndex:;
- (double)currPlaybackTime;
- (void)didUpdateToObject:;
- (BOOL)playEnable;
- (id)visibleVideoControllers;
- (void)didDoubleClickVideoWithAwemeModel:isCancel:;
- (void)setModel:;
- (void)seekToTime:;
- (void)play;
- (long long)numberOfItems;
- (BOOL)canPlay;
- (id)model;
- (void).cxx_destruct;
- (void)pause;
- (id)sizeForItemAtIndex:;
@end
