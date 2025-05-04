@interface AWERecallMessageManager : NSObject
@property (nonatomic) NSDictionary lastRecallMessage;
@property (nonatomic) NSMapTable hashMap;
@property (nonatomic) RxReadWriteLock readWriteLock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)readWriteLock;
- (void)setReadWriteLock:;
- (void)addObserver:handler:;
- (void)registerByteSync;
- (id)lastRecallMessage;
- (void)handleRecallDebugNotification:;
- (void)__handleRecallMessage:;
- (id)hashMap;
- (void)setLastRecallMessage:;
- (void)setHashMap:;
- (id)init;
- (void)dealloc;
- (void)removeObserver:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
