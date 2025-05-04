@interface AWEExtensionRateMonitoringStorage : AWEExtensionStorage
@property (nonatomic) NSArray failedArray;
@property (nonatomic) NSArray successArray;
- (void)addSuccessInfo:;
- (void)addErrorInfo:;
- (id)failedKey;
- (id)successKey;
- (id)failedMutableArray;
- (id)successMutableArray;
- (void)trackRate:errorInfo:;
- (id)failedArray;
- (id)successArray;
- (void)reset;
+ (id)sharedPushImageSuccessRateStorage;
@end
