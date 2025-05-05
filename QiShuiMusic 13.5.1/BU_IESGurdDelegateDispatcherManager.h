@interface BU_IESGurdDelegateDispatcherManager : NSObject
@property (nonatomic) NSMutableDictionary dispatcherDictionary;
- (void)unregisterDelegate:forProtocol:;
- (id)dispatcherDictionary;
- (id)dispatcherForProtocol:;
- (id)dispatcherForProtocol:createIfNeeded:;
- (void)registerDelegate:forProtocol:;
- (void)setDispatcherDictionary:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
