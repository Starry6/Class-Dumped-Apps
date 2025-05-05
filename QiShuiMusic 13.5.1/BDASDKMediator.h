@interface BDASDKMediator : NSObject
@property (nonatomic) @? configBlock;
@property (nonatomic) NSMapTable map;
@property (nonatomic) NSLock operationLock;
- (void)setConfigBlock:;
- (id)configBlock;
- (void)setOperationLock:;
- (id)init;
- (void).cxx_destruct;
- (id)map;
- (void)setMap:;
- (id)operationLock;
+ (id)implementer:;
+ (void)registerConfiguration:;
+ (BOOL)registerProtocol:implBlock:;
+ (BOOL)registerProtocol:implementer:;
+ (void)unregisterProtocol:;
+ (id)sharedInstance;
+ (id)allProtocols;
+ (id)configuration;
@end
