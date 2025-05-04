@interface AWEDemaciaManager : NSObject
@property (nonatomic) NSMutableDictionary protocolToClassMap;
@property (nonatomic) NSMutableDictionary protocolToObjectMap;
@property (nonatomic) NSRecursiveLock recLock;
- (id)getObjectWithProtocol:;
- (Class)getClassWithProtocol:;
- (void)bindClass:toProtocol:;
- (id)protocolToClassMap;
- (void)setProtocolToClassMap:;
- (id)protocolToObjectMap;
- (void)setProtocolToObjectMap:;
- (id)recLock;
- (void)setRecLock:;
- (id)adapterMapDict;
- (id)init;
- (void).cxx_destruct;
+ (id)getObjectWithProtocol:;
+ (Class)getClassWithProtocol:;
+ (id)sharedInstance;
@end
