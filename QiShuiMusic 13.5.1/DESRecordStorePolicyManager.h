@interface DESRecordStorePolicyManager : NSObject
- (id)policyForNSExtensionPluginID:;
- (unsigned long long)coreDuetEventLimitForPluginID:;
- (id)initWithBundleRegistry:policyFileURL:;
- (unsigned long long)daysToExpirationOfRecordsForPluginID:;
- (id)coreDuetPredicateForPluginID:;
- (id)supportedCoreDuetEventStreamNamesForPluginID:;
- (id)supportedRecordTypesForPluginID:;
- (unsigned long long)unsignedIntegerForPluginID:key:defaultValue:;
- (unsigned long long)maximumNumberOfRecordsForPluginID:;
- (void).cxx_destruct;
- (id)coreDuetEventQueryForPluginID:;
- (id)policyForPluginID:;
- (id)arrayOfStringForPlugin:key:defaultValue:;
- (id)stringForPluginID:key:defaultValue:;
+ (id)sharedInstance;
@end
