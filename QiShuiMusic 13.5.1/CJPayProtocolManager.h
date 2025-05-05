@interface CJPayProtocolManager : NSObject
@property (nonatomic) NSMutableDictionary protocolToObjectMap;
@property (nonatomic) NSMutableDictionary protocolToClassMap;
@property (nonatomic) NSMutableDictionary sharedSelectorNameToClassMap;
@property (nonatomic) NSObject<OS_dispatch_queue> rwQueue;
- (id)rwQueue;
- (id)protocolToClassMap;
- (id)protocolToObjectMap;
- (void)setProtocolToClassMap:;
- (void)setProtocolToObjectMap:;
- (void)setRwQueue:;
- (void)setSharedSelectorNameToClassMap:;
- (id)sharedSelectorNameToClassMap;
- (void).cxx_destruct;
+ (void)unbindProtocol:;
+ (void)bindClass:toProtocol:;
+ (void)bindClass:withSharedSelector:toProtocol:;
+ (void)bindObject:toProtocol:;
+ (id)getObjectWithProtocol:;
+ (id)sharedInstance;
@end
