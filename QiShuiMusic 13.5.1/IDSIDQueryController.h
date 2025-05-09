@interface IDSIDQueryController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)_currentCachedRemoteDevicesForDestinations:service:listenerID:;
- (BOOL)requiredIDStatusForDestination:service:listenerID:queue:completionBlock:;
- (void)removeDelegate:;
- (BOOL)currentIDStatusForDestination:service:respectExpiry:listenerID:queue:completionBlock:;
- (long long)_currentCachedIDStatusForDestination:service:listenerID:;
- (BOOL)_warmupQueryCacheForService:;
- (BOOL)requestIDStatusForDestination:service:listenerID:queue:completionBlock:;
- (BOOL)_hasCacheForService:;
- (BOOL)currentRemoteDevicesForDestinations:service:listenerID:queue:completionBlock:;
- (BOOL)removeListenerID:forService:;
- (BOOL)_flushQueryCacheForService:;
- (BOOL)requiredIDStatusForDestinations:service:listenerID:queue:completionBlock:;
- (BOOL)refreshIDStatusForDestination:service:listenerID:queue:completionBlock:;
- (long long)_currentIDStatusForDestination:service:listenerID:;
- (BOOL)currentIDStatusForDestinations:service:respectExpiry:listenerID:queue:completionBlock:;
- (id)_currentIDStatusForDestinations:service:respectExpiry:listenerID:;
- (BOOL)refreshIDStatusForDestinations:service:listenerID:queue:completionBlock:;
- (BOOL)currentIDStatusForDestinations:service:listenerID:queue:completionBlock:;
- (void)addDelegate:queue:;
- (id)_currentIDStatusForDestinations:service:listenerID:;
- (id)_refreshIDStatusForDestinations:service:listenerID:;
- (void)removeDelegate:forService:listenerID:;
- (void).cxx_destruct;
- (long long)_refreshIDStatusForDestination:service:listenerID:;
- (void)_setCurrentIDStatus:forDestination:service:;
- (BOOL)refreshIDStatusForDestinations:service:listenerID:queue:errorCompletionBlock:;
- (void)addListenerID:forService:;
- (BOOL)participantsForDestinations:service:listenerID:queue:completionBlock:;
- (BOOL)requestIDStatusForDestinations:service:listenerID:queue:completionBlock:;
- (BOOL)idInfoForDestinations:service:infoTypes:options:listenerID:queue:completionBlock:;
- (BOOL)forceRefreshIDStatusForDestinations:service:listenerID:queue:completionBlock:;
- (long long)_currentIDStatusForDestination:service:respectExpiry:listenerID:;
- (void)addDelegate:forService:listenerID:queue:;
- (BOOL)currentIDStatusForDestination:service:listenerID:queue:completionBlock:;
+ (id)sharedInstance;
@end
