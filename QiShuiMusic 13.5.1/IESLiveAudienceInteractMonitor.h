@interface IESLiveAudienceInteractMonitor : NSObject
@property (nonatomic) Q module;
@property (nonatomic) <IESLiveAudienceInteractMonitorDataSource> dataProvider;
@property (nonatomic) <IESLiveFullLinkMonitor> fullLinkMonitor;
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
@property (nonatomic) NSDictionary samplingConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fullLinkMonitor;
- (id)audienceInteractMonitorSamplingConfig;
- (id)baseParams;
- (void)didSetAttachingDIContext;
- (unsigned long long)fullLinkRoleTypeFromRoleType:;
- (id)initWithModule:dataProvider:;
- (id)logTag;
- (void)monitorBussinessWithEventType:bussinessName:extra:;
- (void)monitorWithAPIPath:requestTime:response:error:extra:;
- (void)monitorWithAPIPath:roleType:requestTime:response:error:extra:;
- (void)monitorWithAPIPath:roleType:roomID:requestTime:response:error:extra:;
- (void)monitorWithMessage:extra:;
- (id)pr_paramsWithAPIPath:requestTime:response:error:extra:;
- (id)samplingConfig;
- (id)samplingServiceNameWithServiceName:key:;
- (id)samplingServiceNameWithServiceName:key:roleType:;
- (void)setFullLinkMonitor:;
- (void)setSamplingConfig:;
- (unsigned long long)module;
- (id)dataProvider;
- (void)setDataProvider:;
- (void).cxx_destruct;
- (void)setModule:;
- (id)room;
- (void)setRoom:;
@end
