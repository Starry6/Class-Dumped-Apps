@interface CoreMLModelSecurityServiceToClient : NSObject
@property (nonatomic) NSMutableDictionary featureProviderMap;
@property (nonatomic) NSCountedSet featureProviderCount;
@property (nonatomic) NSObject<OS_dispatch_queue> serviceToClientQueue;
- (id)init;
- (void).cxx_destruct;
- (void)clientFeatureValueForName:uniqueKeyForProvider:withReply:;
- (void)clientFeatureNames:withReply:;
- (id)featureProviderMap;
- (void)setFeatureProviderMap:;
- (id)featureProviderCount;
- (void)setFeatureProviderCount:;
- (id)serviceToClientQueue;
- (void)setServiceToClientQueue:;
@end
