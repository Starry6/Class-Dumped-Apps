@interface APSyncMediaRemoteLegacyControllerDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)legacyController:volumeDidChange:forOutputDevice:;
- (void)legacyController:volumeControlAvailabilityDidChange:forOutputDevice:;
- (void)legacyController:masterVolumeDidChange:;
- (void)legacyControllerConnectionDidDisconnect:withError:;
- (void)legacyControllerConnectionDidConnect:;
- (id)initWithContextAndCallbacks:volumeControlAvailableChanged:volumeChanged:masterVolumeChanged:endpointDescriptionChanged:weakCallbackContext:ID:;
- (int)addEndpointDescriptionChangedListener:;
- (int)removeEndpointDescriptionChangedListener:;
- (void)_endpointDescriptionChanged:;
@end
