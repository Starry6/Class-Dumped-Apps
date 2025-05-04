@interface AWETeenGeneralAuthorVideoSectionController : AWETeenGeneralBaseSectionController
@property (nonatomic) AWETeenGeneralAuthorVideoCardModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cellForItemAtIndex:;
- (double)currPlaybackTime;
- (void)didUpdateToObject:;
- (void)cardShow;
- (BOOL)playEnable;
- (long long)currPlayIndex;
- (void)seekToPlayIndex:;
- (id)visibleVideoControllers;
- (id)visibleSlidesViews;
- (void)cellShow:atIndex:;
- (void)didClickVideoWithAwemeModel:;
- (void)scrollToItem:;
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
