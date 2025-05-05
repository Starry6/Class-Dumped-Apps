@interface ICKeyedSharedInstanceManager : NSObject
- (void)decrementUsageCountForKey:;
- (id)initWithInstantiationHandler:;
- (void).cxx_destruct;
- (id)sharedInstanceForKey:;
- (void)incrementUsageCountForKey:;
@end
