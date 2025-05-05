@interface IESECLiveTrackerLowerVersionAdapter : IESECLiveLowerVersionAdapter
@property (nonatomic) <IESECLiveTracker> target;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackMonitorService:metric:category:extra:;
@end
