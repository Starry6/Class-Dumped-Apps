@interface FAPeopleDiscoveryService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)startMonitoringProximity;
- (void)stopMonitoringProximity;
- (id)getNearbyPeople;
+ (id)sharedInstance;
@end
