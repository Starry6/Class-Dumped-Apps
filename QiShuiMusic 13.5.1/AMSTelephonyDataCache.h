@interface AMSTelephonyDataCache : NSObject
@property (nonatomic) CoreTelephonyClient client;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) CTXPCContexts activeContexts;
@property (nonatomic) NSArray carrierNames;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setClient:;
- (id)carrierNamesPromise;
- (id)client;
- (void).cxx_destruct;
- (void)phoneNumberChanged:;
- (id)activeContexts;
- (void)setQueue:;
- (id)queue;
- (id)carrierNames;
- (void)activeSubscriptionsDidChange;
- (void)_clearCaches:;
- (id)initWithClientClass:;
- (id)initWithTelephonyClient:queue:;
- (id)carrierNamesWithError:;
+ (id)sharedCache;
@end
