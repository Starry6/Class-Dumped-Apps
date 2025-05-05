@interface NEHotspotConfigurationManager : NSObject
- (void)applyConfiguration:completionHandler:;
- (void)removeConfigurationForSSID:;
- (void)removeConfigurationForHS20DomainName:;
- (void)getConfiguredSSIDsWithCompletionHandler:;
+ (id)sharedManager;
@end
