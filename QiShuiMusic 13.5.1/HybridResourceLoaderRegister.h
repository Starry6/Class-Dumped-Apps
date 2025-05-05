@interface HybridResourceLoaderRegister : NSObject
@property (nonatomic) NSMutableDictionary resourceLoaderMap;
- (void)registerHybridResourceLoader:WithBid:;
- (id)resourceLoaderMap;
- (id)resourceLoaderWithBid:;
- (void)setResourceLoaderMap:;
- (void)unregisterResourceLoaderWithBid:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
