@interface AWEShareDownloadImageChannel : AWEShareBaseChannel
@property (nonatomic) q shareCategory;
- (void)setConfigModel:;
- (void)shareWithCompletion:;
- (id)shareImage;
- (long long)shareCategory;
- (void)setShareCategory:;
- (BOOL)showGenarateImageChannelWithContext:;
- (void)p_saveCutHybridViewToAlbumWithCompletion:;
- (id)commonPreviewStat;
- (void)p_showToastWithSaveSuccess:;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
@end
