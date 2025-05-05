@interface AMSEngagementObserverInfo : NSObject
@property (nonatomic) NSMutableSet underlyingPlacements;
@property (nonatomic) NSMutableSet underlyingServiceTypes;
@property (nonatomic) NSSet placements;
@property (nonatomic) NSSet serviceTypes;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (id)underlyingPlacements;
- (void)addPlacement:;
- (id)placements;
- (void)setUnderlyingPlacements:;
- (id)underlyingServiceTypes;
- (void)setUnderlyingServiceTypes:;
- (void).cxx_destruct;
- (void)addServiceType:;
- (id)initWithQueue:;
- (void)removeServiceType:;
- (id)serviceTypes;
- (void)removePlacement:;
@end
