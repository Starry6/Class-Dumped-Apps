@interface AWEDYSimpleDownloadShareChannel : AWEDownloadShareChannel
- (void)requestPhotoLibraryPermission:;
- (void)receiveShareChannelEvent:platform:liveShareModel:extraParams:;
- (void)shareWithCompletion:;
- (BOOL)prepareToShare;
- (void)prepareToShareWithCompletion:;
- (BOOL)isShareItemEnabled;
- (BOOL)isNeedSimpleDownloadWithContext:;
- (void)gotoPhotoLibrarySetting;
- (id)getRoomModel;
- (void)beginSimpleDownloadImageWithCompletion:;
- (void)beginSimpleDownloadVideoWithCompletion:;
- (void)saveImageWithRoomModel:completion:;
- (void)saveVideoWithRoomModel:completion:;
- (BOOL)isNeedDownloadImage;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
@end
