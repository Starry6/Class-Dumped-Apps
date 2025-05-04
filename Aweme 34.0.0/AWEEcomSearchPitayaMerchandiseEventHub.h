@interface AWEEcomSearchPitayaMerchandiseEventHub : NSObject
@property (nonatomic) NSHashTable activePages;
- (void)setActivePages:;
- (id)activePages;
- (void)registerEcomFetchExtraResultMessageHandler:;
- (void)unregisterPitayaMessageHandler:;
- (void)registerPitayaMessageHandler:;
- (void).cxx_destruct;
+ (id)sharedEventHub;
@end
