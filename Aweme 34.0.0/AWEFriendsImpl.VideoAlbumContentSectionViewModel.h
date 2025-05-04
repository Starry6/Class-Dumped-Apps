@interface AWEFriendsImpl.VideoAlbumContentSectionViewModel : BDMultiContentContainer.BaseContentSectionViewModel
@property (nonatomic) BOOL isPinching;
@property (nonatomic) NSArray previewImages;
@property (nonatomic) AWEAwemeModel aweme;
- (id)aweme;
- (double)totalPlayDuration:;
- (void)playOrPauseTimer:;
- (void)setAlbumPlayStatePlay;
- (void).cxx_destruct;
- (void)setIsPinching:;
- (BOOL)isPinching;
- (id)previewImages;
@end
