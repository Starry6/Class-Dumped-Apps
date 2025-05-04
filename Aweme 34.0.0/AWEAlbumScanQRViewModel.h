@interface AWEAlbumScanQRViewModel : AWEAlbumBaseViewModel
- (id)initWithInputData:;
- (void)goToNextWithMultiSelect:;
- (BOOL)needFetchAlbumAssetsWhenClickNext;
- (BOOL)shouldSelectAlbumAsset:;
- (void)p_didSelectedToScanQR:;
@end
