@interface AWETeenGeneralAlbumSectionController : AWETeenGeneralBaseSectionController
@property (nonatomic) AWETeenGeneralAlbumCardModel model;
@property (nonatomic) <AWETeenGeneralCardDelegate> cardDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cellForItemAtIndex:;
- (double)currPlaybackTime;
- (void)didUpdateToObject:;
- (void)cardShow;
- (BOOL)playEnable;
- (id)visibleVideoControllers;
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
