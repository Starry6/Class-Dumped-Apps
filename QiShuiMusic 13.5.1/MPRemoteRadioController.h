@interface MPRemoteRadioController : NSObject
@property (nonatomic) RadioAvailabilityController availabilityController;
@property (nonatomic) RadioRecentStationsController recentStationsController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_addConnection:;
- (id)init;
- (void)_removeConnection:;
- (void)dealloc;
- (void)start;
- (id)recentStationsController;
- (void)_playActivityReportingControllerDidFlushEventsNotification:;
- (void)serviceRadioControllerGetRecentStationGroupsWithCompletionHandler:;
- (void)_handleRecentStationsControllerDidChange;
- (void)serviceRadioControllerGetRadioAvailabilityWithCompletionHandler:;
- (void)_recentStationsControllerDidChangeStationsNotification:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (id)availabilityController;
- (void).cxx_destruct;
- (void)_radioAvailabilityControllerRadioAvailableDidChangeNotification:;
@end
