@interface IESBridgeMethodRegistry : NSObject
@property (nonatomic) NSMutableArray methodsArray;
@property (nonatomic) NSMutableDictionary methodsMap;
@property (nonatomic) NSArray namespaceOrdered;
@property (nonatomic) NSObject<OS_dispatch_queue> piperRegisterQueue;
@property (nonatomic) BOOL isMapRegistry;
- (void)_addBridgeMethodToArray:;
- (void)_addBridgeMethodToMap:;
- (id)_findMethodInArrayForMessage:;
- (id)_findMethodInMapForMessage:;
- (void)_removeBridgeMethodFromArray:;
- (void)_removeBridgeMethodFromMap:;
- (void)addBridgeMethod:;
- (id)findMethodForMessage:;
- (BOOL)isMapRegistry;
- (id)methodsMap;
- (id)namespaceOrdered;
- (id)piperRegisterQueue;
- (void)removeBridgeMethod:;
- (void)setIsMapRegistry:;
- (void)setMethodsArray:;
- (void)setMethodsMap:;
- (void)setNamespaceOrdered:;
- (void)setPiperRegisterQueue:;
- (id)init;
- (void).cxx_destruct;
- (id)allMethods;
- (id)methodsArray;
@end
