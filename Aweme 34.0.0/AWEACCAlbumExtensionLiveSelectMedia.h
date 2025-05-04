@interface AWEACCAlbumExtensionLiveSelectMedia : ACCAlbumExtension
@property (nonatomic) q mode;
@property (nonatomic) q photoCountLimit;
@property (nonatomic) q videoCountLimit;
@property (nonatomic) q durationLimit;
@property (nonatomic) q maxImageFileSize;
- (void)setDurationLimit:;
- (long long)photoCountLimit;
- (long long)videoCountLimit;
- (long long)maxImageFileSize;
- (void)albumDidClickSelectAssetsButtonWithSelectedAssetes:targetAsset:isSelected:;
- (void)setPhotoCountLimit:;
- (void)setVideoCountLimit:;
- (void)setMaxImageFileSize:;
- (void)setMode:;
- (long long)mode;
- (long long)durationLimit;
@end
