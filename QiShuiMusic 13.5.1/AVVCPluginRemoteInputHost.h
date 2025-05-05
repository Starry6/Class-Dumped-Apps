@interface AVVCPluginRemoteInputHost : NSObject
@property (nonatomic) AVVoiceController mMotherController;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)mockPluginEndpoint;
- (void)inputPlugin:didPublishDevice:;
- (void)inputPlugin:didUnpublishDevice:;
- (void)invalidatePlugins;
- (id)allBundles:;
- (id)findDeviceWithIdentifier:;
- (id)findFirstBluetoothDevice;
- (void)setParentVoiceController:;
- (id)mMotherController;
- (void)setMMotherController:;
@end
