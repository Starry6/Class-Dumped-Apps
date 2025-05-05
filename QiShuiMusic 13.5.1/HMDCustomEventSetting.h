@interface HMDCustomEventSetting : NSObject
@property (nonatomic) NSDictionary allowedLogTypes;
@property (nonatomic) NSDictionary allowedServiceTypes;
@property (nonatomic) NSDictionary allowedMetricTypes;
@property (nonatomic) BOOL needHookTTMonitor;
@property (nonatomic) BOOL enableEventTrace;
@property (nonatomic) NSArray serviceTypeBlacklist;
@property (nonatomic) NSArray logTypeBlacklist;
- (id)allowedLogTypes;
- (id)allowedMetricTypes;
- (id)allowedServiceTypes;
- (BOOL)enableEventTrace;
- (id)logTypeBlacklist;
- (BOOL)needHookTTMonitor;
- (id)serviceTypeBlacklist;
- (void)setAllowedLogTypes:;
- (void)setAllowedMetricTypes:;
- (void)setAllowedServiceTypes:;
- (void)setEnableEventTrace:;
- (void)setLogTypeBlacklist:;
- (void)setNeedHookTTMonitor:;
- (void)setServiceTypeBlacklist:;
- (void).cxx_destruct;
+ (id)hmd_attributeMapDictionary;
@end
