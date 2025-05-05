@interface AWEAppContext : NSObject
@property (nonatomic) NSMapTable objectRegistry;
@property (nonatomic) NSMapTable classRegistry;
@property (nonatomic) NSMapTable providerRegistry;
- (BOOL)bind:forProtocol:;
- (BOOL)bindClass:forProtocol:;
- (BOOL)bindProvider:forProtocol:;
- (id)objectForProtocol:;
- (id)objectRegistry;
- (id)providerRegistry;
- (void)setClassRegistry:;
- (void)setObjectRegistry:;
- (void)setProviderRegistry:;
- (id)init;
- (id)classRegistry;
- (void).cxx_destruct;
+ (id)appContext;
@end
