@interface MRExternalDeviceController : NSObject
@property (nonatomic) <MRExternalDeviceControllerDelegate> delegate;
@property (nonatomic) NSString bonjourServiceType;
@property (nonatomic) BOOL discovering;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)netServiceBrowser:didFindService:moreComing:;
- (void)netServiceBrowser:didRemoveService:moreComing:;
- (void)setDelegate:;
- (void)beginDiscovery;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)isDiscovering;
- (id)bonjourServiceType;
- (void)netServiceDidResolveAddress:;
- (void)netService:didUpdateTXTRecordData:;
- (id)initWithBonjourServiceType:;
- (void)endDiscovery;
- (BOOL)_isManagedConfigIDAllowed:;
+ (Class)externalDeviceClass;
@end
