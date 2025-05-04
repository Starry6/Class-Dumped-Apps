@interface AWEIMMediaEditorProxy : NSObject
@property (nonatomic) PHAsset asset;
@property (nonatomic) UIViewController host;
@property (nonatomic) <AWEIMMediaEditorProxyDelegate> delegate;
@property (nonatomic) AWEIMPhotoPickerModel pickerModel;
@property (nonatomic) BOOL disableVideo;
@property (nonatomic) BOOL fromIMAlbum;
- (void)onReceiveEditedMediaWithPath:userInfo:;
- (void)setPickerModel:;
- (id)pickerModel;
- (id)p_imModelForAsset:;
- (id)p_sourceModelForAsset:;
- (BOOL)fromIMAlbum;
- (void)p_onReceiveEditedMediaFromIMAlbum;
- (BOOL)disableVideo;
- (void)pushMediaEditorViewController;
- (void)setDisableVideo:;
- (void)setFromIMAlbum:;
- (void)setHost:;
- (id)host;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setAsset:;
- (void)setDelegate:;
- (id)asset;
@end
