@interface VeLSNetworkManager : NSObject
@property (nonatomic) LSSSchedulingRequestInfo schedulingRequestInfo;
- (id)GetAbrAutoSettings;
- (void)GetLSSettings;
- (id)GetLivePlayerSettings;
- (void)GetStrategySDKSettings;
- (id)GetQuicSettings;
- (id)GetRTMPlayer;
- (void)StartPeriodicRequest;
- (id)currentSchedulingRequestInfo;
- (id)getConfigAndStrategyByIntKey:key:defaultValue:sdkInfo:;
- (id)schedulingRequestInfo;
- (void)setSchedulingRequestInfo:;
- (void)updateCurrentSchedulingRequestInfo:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
