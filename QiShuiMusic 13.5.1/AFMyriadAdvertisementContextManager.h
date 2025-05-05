@interface AFMyriadAdvertisementContextManager : NSObject
- (id)_settingsConnection;
- (void).cxx_destruct;
- (void)pushMyriadAdvertisementContext:completionHandler:;
- (void)reset;
- (id)initWithQueue:;
- (void)_resetSettingsConnection;
- (void)triggerABCForType:subType:context:;
@end
