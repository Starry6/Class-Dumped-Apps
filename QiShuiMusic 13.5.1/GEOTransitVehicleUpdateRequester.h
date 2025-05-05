@interface GEOTransitVehicleUpdateRequester : NSObject
@property (nonatomic) NSHashTable updaters;
@property (nonatomic) NSMutableSet processedTripIds;
- (id)initPrivate;
- (void).cxx_destruct;
- (void)_purgeAllObjects;
- (void)_cancelRequestIfNeeded;
- (void)registerVehicleUpdater:;
- (void)unregisterVehicleUpdater:;
- (void)_scheduleUpdateTimerWithInterval:;
- (void)_cancelUpdateTimer;
- (void)_processTripIds;
- (id)_tripIdsForUpdaters:filteredTripIDs:;
- (void)_sendRequestForTripIds:;
- (void)_handleMapItems:error:forTripIDs:;
- (void)_removeTripIdsIfApplicable:;
- (id)updaters;
- (id)processedTripIds;
- (void)mockProcessedIds:;
+ (id)sharedInstance;
@end
