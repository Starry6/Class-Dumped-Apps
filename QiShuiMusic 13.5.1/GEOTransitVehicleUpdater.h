@interface GEOTransitVehicleUpdater : NSObject
@property (nonatomic) <GEOTransitVehicleUpdaterDelegate> delegate;
@property (nonatomic) NSSet tripIDs;
@property (nonatomic) BOOL active;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)setActive:;
- (BOOL)isActive;
- (void)setTripIDs:;
- (id)tripIDs;
@end
