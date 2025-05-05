@interface BDUGLocationServiceCenter : NSObject
@property (nonatomic) NSMutableDictionary p_protocolToObjectMap;
@property (nonatomic) NSMutableDictionary p_protocolToClassMap;
@property (nonatomic) NSRecursiveLock p_lock;
- (void)_bindClass:toProtocol:;
- (BOOL)_checkSelector:withProtocol:assert:;
- (Class)_getClassWithProtocol:;
- (id)_getObjectWithProtocol:;
- (id)p_protocolToClassMap;
- (id)p_protocolToObjectMap;
- (void)setP_lock:;
- (void)setP_protocolToClassMap:;
- (void)setP_protocolToObjectMap:;
- (id)init;
- (void).cxx_destruct;
- (id)p_lock;
+ (void)bindClass:toProtocol:;
+ (BOOL)checkClassSelector:withProtocol:assert:;
+ (BOOL)checkSelector:withProtocol:assert:;
+ (Class)getClassWithProtocol:;
+ (id)getObjectWithProtocol:;
+ (void)willStartLocationKit;
+ (id)sharedInstance;
@end
