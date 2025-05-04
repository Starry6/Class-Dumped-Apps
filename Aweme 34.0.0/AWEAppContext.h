@interface AWEAppContext : NSObject
@property (nonatomic) NSMapTable objectRegistry;
@property (nonatomic) NSMapTable classRegistry;
@property (nonatomic) NSMapTable providerRegistry;
- (id)objectForProtocol:;
- (BOOL)bindProvider:forProtocol:;
- (BOOL)bindClass:forProtocol:;
- (id)providerRegistry;
- (id)objectRegistry;
- (BOOL)bind:forProtocol:;
- (void)setObjectRegistry:;
- (void)setClassRegistry:;
- (void)setProviderRegistry:;
- (id)init;
- (void).cxx_destruct;
- (id)classRegistry;
+ (id)appContext;
@end
