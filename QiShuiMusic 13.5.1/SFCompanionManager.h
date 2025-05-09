@interface SFCompanionManager : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) <SFCompanionServiceManagerProtocol> managerProxy;
@property (nonatomic) NSString deviceID;
@property (nonatomic) NSString deviceIP;
@property (nonatomic) NSString deviceName;
@property (nonatomic) NSMutableDictionary services;
@property (nonatomic) NSMutableDictionary streamHandlers;
@property (nonatomic) NSObject<OS_dispatch_queue> serviceIdentifierQueue;
@property (nonatomic) NSObject<OS_dispatch_semaphore> managerSemaphore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setDeviceName:;
- (void)setServices:;
- (void)dealloc;
- (id)deviceName;
- (id)identifier;
- (void)xpcManagerConnectionInterrupted;
- (id)serviceForIdentifier:;
- (void)setDeviceID:;
- (id)deviceID;
- (void).cxx_destruct;
- (id)services;
- (void)setIdentifier:;
- (void)xpcManagerDidInvalidate:;
- (void)streamToService:withFileHandle:acceptReply:;
- (id)streamDataForIdentifier:;
- (void)retrieveManagerProxy;
- (void)signalSemaphore;
- (void)getStreamsForData:withStreamHandler:;
- (void)supportStreamsWithIdentifier:withStreamHandler:;
- (void)disableStreamSupportForIdentifier:;
- (void)streamsFromFileHandle:withCompletionHandler:;
- (id)managerProxy;
- (void)setManagerProxy:;
- (id)deviceIP;
- (void)setDeviceIP:;
- (id)streamHandlers;
- (void)setStreamHandlers:;
- (id)serviceIdentifierQueue;
- (void)setServiceIdentifierQueue:;
- (id)managerSemaphore;
- (void)setManagerSemaphore:;
+ (id)serviceManager;
@end
