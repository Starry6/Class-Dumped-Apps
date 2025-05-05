@interface BDLynxBridgeRegistry : NSObject
@property (nonatomic) NSMutableDictionary methodsMap;
@property (nonatomic) NSObject<OS_dispatch_queue> piperRegisterQueue;
- (void)addBridgeMethod:;
- (id)findMethodForMessage:;
- (id)initShared;
- (id)methodKeyWithMethodName:namescope:;
- (id)methodsMap;
- (id)piperRegisterQueue;
- (void)removeMethod:;
- (void)setMethodsMap:;
- (void)setPiperRegisterQueue:;
- (id)init;
- (void)commonInit;
- (void).cxx_destruct;
- (id)allMethods;
+ (id)sharedRegistry;
@end
