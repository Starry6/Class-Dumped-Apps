@interface IESLiveInteractiveMonitorServiceIMP : NSObject
@property (nonatomic) NSDictionary sampleConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pr_paramsWithAPIPath:roleType:requestTime:response:error:extra:;
- (id)audienceInteractDefaultSampleConfig;
- (void)audienceInteractiveMonitorWithAPIPath:scene:roleType:requestTime:response:error:extra:;
- (id)descForRoleType:;
- (unsigned long long)fullLinkRoleTypeWithRoleType:;
- (id)logTagWithScene:;
- (unsigned long long)moduleWithScene:;
- (id)sampleConfig;
- (id)samplingServiceNameWithServiceName:key:roleType:;
- (void)setSampleConfig:;
- (void)traceWithBusinessType:traceName:step:extra:;
- (id)init;
- (void).cxx_destruct;
@end
