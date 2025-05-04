@interface AWELongPressPanelSaveViewModel : AWELongPressPanelBaseViewModel
- (BOOL)enableDownload;
- (BOOL)needShow;
- (void)doDownloadTrackWithModel:referString:logExtraDict:;
- (void)p_doDownloadImageAlbumWithSelectedIndices:model:referString:completion:;
- (id)albumImagePickerViewController;
- (void)downloadImageAlbum:referString:logExtraDict:completion:;
- (void)showImageAlbumDownloadSouceChooseWithAWeme:referString:logExtraDict:completion:;
- (BOOL)shouldDownloadWithAwemeModel:;
- (void)downloadFromLongPress:referString:logExtraDict:progressBlock:completion:;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (void)p_saveImageAlbumAsVideoWithAWeme:completion:;
+ (id)longPressPanelViewModel;
@end
