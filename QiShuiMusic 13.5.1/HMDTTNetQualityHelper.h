@interface HMDTTNetQualityHelper : NSObject
@property (nonatomic) BOOL isRunning;
@property (nonatomic) q netQualityCode;
@property (nonatomic) <HMDNetQualityProtocol> delegate;
- (void)recieveNetConnectionTypeChange:;
- (void)activelyGetCurrentNetConnectType;
- (long long)mapTTNetConnectionTypeToStandardCode:;
- (long long)netQualityCode;
- (void)registerNetConnectionTypeNotification;
- (void)registerQualityDelegate:;
- (void)sentNetConnectionTypeChange;
- (void)setNetQualityCode:;
- (void)unregisterNetConnectionTypeNotification;
- (void)dealloc;
- (void)start;
- (void)setDelegate:;
- (void)stop;
- (void)setIsRunning:;
- (BOOL)isRunning;
- (id)delegate;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
