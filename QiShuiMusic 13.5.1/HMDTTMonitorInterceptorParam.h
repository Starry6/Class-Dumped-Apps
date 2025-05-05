@interface HMDTTMonitorInterceptorParam : NSObject
@property (nonatomic) NSString appID;
@property (nonatomic) NSString serviceName;
@property (nonatomic) NSString logType;
@property (nonatomic) Q storeType;
@property (nonatomic) q trackType;
@property (nonatomic) NSDictionary wrapData;
@property (nonatomic) q accumulateCount;
@property (nonatomic) BOOL isNewInterface;
- (long long)accumulateCount;
- (BOOL)isNewInterface;
- (void)setAccumulateCount:;
- (void)setIsNewInterface:;
- (void)setWrapData:;
- (id)wrapData;
- (unsigned long long)storeType;
- (void)setStoreType:;
- (id)logType;
- (void)setServiceName:;
- (id)serviceName;
- (void)setAppID:;
- (id)appID;
- (void).cxx_destruct;
- (void)setLogType:;
- (void)setTrackType:;
- (long long)trackType;
@end
