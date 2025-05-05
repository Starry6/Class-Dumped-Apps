@interface BDLSDKManager : NSObject
@property (nonatomic) NSMutableDictionary protocolToClassMap;
@property (nonatomic) NSMutableDictionary protocolToObjectMap;
@property (nonatomic) NSMutableDictionary systemInfo;
@property (nonatomic) NSRecursiveLock recLock;
- (id)recLock;
- (void)bdl_bindServiceClass:toProtocol:;
- (id)bdl_serviceWithProtocol:;
- (id)protocolToClassMap;
- (id)protocolToObjectMap;
- (void)setProtocolToClassMap:;
- (void)setProtocolToObjectMap:;
- (void)setRecLock:;
- (id)init;
- (id)systemInfo;
- (void).cxx_destruct;
- (void)setSystemInfo:;
+ (void)initLogObserver;
+ (void)bdl_bindServiceClass:toProtocol:;
+ (id)bdl_serviceWithProtocol:;
+ (id)bdl_serviceWithProtocol:selector:;
+ (id)getAllSystemInfo;
+ (id)getSystemInfoByKey:;
+ (id)lynxVersionString;
+ (void)registCustomUIComponent;
+ (void)registerCustomSystemInfo;
+ (id)sharedInstance;
+ (void)setup;
@end
