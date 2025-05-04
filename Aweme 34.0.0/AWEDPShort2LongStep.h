@interface AWEDPShort2LongStep : AWEWorkflowStep
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onStep:linkSession:;
- (id)shortAllowList;
- (id)extractRedirectURL:;
- (void)logShort2LongFailed:;
- (void)reportOpenURL:resultURL:isSuccess:;
- (id)aAWEDPShort2LongStepCommonAdapter;
- (BOOL)checkAPPScheme:;
+ (Class)aAWEDPShort2LongStepCommonAdapterClass;
@end
