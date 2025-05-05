@interface DNDAppConfigurationService : NSObject
- (id)_initWithClientIdentifier:;
- (void).cxx_destruct;
- (void)getCurrentAppConfigurationForActionIdentifier:withCompletionHandler:;
- (void)invalidateAppContextForActionIdentifier:;
+ (id)serviceForClientIdentifier:;
@end
