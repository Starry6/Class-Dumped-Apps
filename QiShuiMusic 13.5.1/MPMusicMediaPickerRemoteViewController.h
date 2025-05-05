@interface MPMusicMediaPickerRemoteViewController : _UIRemoteViewController
@property (nonatomic) MPMediaPickerController mediaPickerController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewServiceDidTerminateWithError:;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)remoteMediaPickerDidCancel;
- (void)remoteMediaPickerDidPickMediaItems:;
- (void)remoteMediaPickerDidPickPlaybackArchive:;
- (id)mediaPickerController;
- (void)setMediaPickerController:;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@end
