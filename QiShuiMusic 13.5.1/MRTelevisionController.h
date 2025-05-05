@interface MRTelevisionController : MRExternalDeviceController
@property (nonatomic) _MRTelevisionControllerBlockCallback discoveryCallback;
@property (nonatomic) _MRTelevisionControllerBlockCallback removalCallback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)externalDeviceController:didRemoveDevice:;
- (void)externalDeviceController:didDiscoverDevice:;
- (id)discoveryCallback;
- (void)setDiscoveryCallback:;
- (id)removalCallback;
- (void)setRemovalCallback:;
+ (Class)externalDeviceClass;
@end
