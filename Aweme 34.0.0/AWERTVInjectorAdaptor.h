@interface AWERTVInjectorAdaptor : NSObject
@property (nonatomic) <RxInjector> injector;
@property (nonatomic) NSMutableSet waitInjectInstances;
- (void)rxAwakeFromPropertyInjection;
- (id)waitInjectInstances;
- (BOOL)__injectProperties:;
- (id)init;
- (id).cxx_construct;
- (id)injector;
- (void).cxx_destruct;
+ (BOOL)injectProperties:;
+ (id)sharedInstance;
@end
