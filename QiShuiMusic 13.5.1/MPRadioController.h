@interface MPRadioController : NSObject
@property (nonatomic) BOOL radioAvailable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isRadioAvailable;
- (void)clientRadioControllerRadioAvailabilityDidChange:;
- (void)clientRadioControllerRecentStationsDidChange;
- (void)getRecentStationGroupsWithCompletionHandler:;
- (void)_beginRemoteProcessAssertionWithCompletionHandler:;
- (void)_endRemoteProcessAssertion;
- (void)_setRadioAvailable:;
- (void)_getConnectionWithCompletionHandler:;
@end
