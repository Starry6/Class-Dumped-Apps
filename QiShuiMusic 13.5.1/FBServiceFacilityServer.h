@interface FBServiceFacilityServer : NSObject
@property (nonatomic) BSServiceDomainSpecification domain;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeFacility:;
- (id)init;
- (void)dealloc;
- (void)addFacility:;
- (void)listener:didReceiveConnection:withContext:;
- (void)noteMilestoneReached:;
- (void)_facilityQueue_facility:handleMessage:client:;
- (void)run;
- (id)_initWithDomain:;
- (void).cxx_destruct;
- (id)domain;
- (BOOL)_lock_areFacilityPrerequisitesSatisfied:;
- (void)_lock_evaluateSuspendedFacility:;
+ (id)sharedInstance;
+ (id)sharedInstanceDomain;
@end
