@interface AWEFriendsImpl.RichContentBaseSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) q itemCount;
@property (nonatomic) BOOL needGradientLayer;
@property (nonatomic) BOOL userScrolled;
@property (nonatomic) BOOL isMuted;
@property (nonatomic) q innerIndex;
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) BOOL isPinching;
- (id)aweme;
- (BOOL)needGradientLayer;
- (void)setNeedGradientLayer:;
- (void)setUserScrolled:;
- (long long)innerIndex;
- (double)totalPlayDuration:;
- (void)playOrPauseTimer:;
- (void)setAlbumPlayStatePlay;
- (void)updateByModels:animated:sync:;
- (id)init;
- (void)setIsMuted:;
- (long long)itemCount;
- (void).cxx_destruct;
- (BOOL)isMuted;
- (void)setIsPinching:;
- (BOOL)isPinching;
- (BOOL)userScrolled;
@end
