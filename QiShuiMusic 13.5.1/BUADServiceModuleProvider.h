@interface BUADServiceModuleProvider : NSObject
@property (nonatomic) NSHashTable delegates;
@property (nonatomic) <BUADServiceModuleProvideDelegate> internalDelegate;
- (void)destroyProvider;
- (id)getAllProvidedModules;
- (id)delegates;
- (void)setDelegates:;
- (void)addProvider:;
- (id)internalDelegate;
- (void)setInternalDelegate:;
- (void).cxx_destruct;
+ (id)provider;
@end
