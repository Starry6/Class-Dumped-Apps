@interface AnnieXServiceHolder : NSObject
@property (nonatomic) BDXThreadSafeDictionary protocolToClassMap;
@property (nonatomic) BDXThreadSafeDictionary protocolToObjectMap;
@property (nonatomic) NSRecursiveLock recLock;
@property (nonatomic) NSMutableSet protocolClassCalledSet;
- (id)recLock;
- (void)__triggerSetupIfNeededWithProtocolName:protocol:bizId:;
- (void)bindClass:toProtocol:;
- (BOOL)checkClass:protocol:;
- (Class)getClassWithProtocol:;
- (Class)getClassWithProtocol:bizID:;
- (id)getObjectWithClass:;
- (id)getObjectWithProtocol:bizID:;
- (id)protocolClassCalledSet;
- (id)protocolToClassMap;
- (id)protocolToObjectMap;
- (void)setProtocolClassCalledSet:;
- (void)setProtocolToClassMap:;
- (void)setProtocolToObjectMap:;
- (void)setRecLock:;
- (id)init;
- (void).cxx_destruct;
@end
