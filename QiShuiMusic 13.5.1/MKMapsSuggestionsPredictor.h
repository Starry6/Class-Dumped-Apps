@interface MKMapsSuggestionsPredictor : NSObject
@property (nonatomic) <MKMapsSuggestionsSignalPackCacheInterface> signalPackCacheInterface;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)_closeConnection;
- (id)signalPackCacheInterface;
- (void)_initCloseTimerIfNecessary;
- (void)_scheduleCloseConnection;
- (id)NSDataToMKMapsSuggestionsTransportModes:error:;
- (void).cxx_destruct;
- (void)_unscheduleCloseConnection;
- (BOOL)transportModeForDestinationEntryData:originCoordinateData:handler:;
- (BOOL)transportModeForDestinationMapItemData:originCoordinateData:handler:;
- (void)setSignalPackCacheInterface:;
- (BOOL)_openConnectionIfNecessary;
+ (id)sharedPredictor;
@end
