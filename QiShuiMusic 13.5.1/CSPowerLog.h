@interface CSPowerLog : NSObject
@property (nonatomic) NSMutableDictionary operationsByBundleID;
@property (nonatomic) NSMutableDictionary reasonedOperationsByBundleID;
@property (nonatomic) NSDate lastFlushDate;
@property (nonatomic) Q cachedCount;
- (unsigned long long)cachedCount;
- (void)_addToDictionary:bundleID:itemCount:;
- (id)init;
- (void)setReasonedOperationsByBundleID:;
- (void)_addToDictionary:bundleID:itemCount:reason:;
- (void)flushToPowerLog_locked_and_unlock;
- (void)setCachedCount:;
- (void)logWithBundleID:indexOperation:itemCount:reason:;
- (id)operationsByBundleID;
- (void)setLastFlushDate:;
- (void).cxx_destruct;
- (void)updateDictionaryAndUnlock:keyName:operationDictionary:;
- (id)reasonedOperationsByBundleID;
- (void)updateDictionaryAndUnlock:cacheCount:keyName:operationDictionary:;
- (id)lastFlushDate;
- (void)setOperationsByBundleID:;
- (void)logWithBundleID:indexOperation:itemCount:;
+ (id)sharedInstance;
+ (id)keyNameForOperation:;
@end
