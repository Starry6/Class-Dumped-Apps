@interface CMIndoorOutdoorManagerInternal : NSObject
- (id)init;
- (void)dealloc;
- (void)_teardown;
- (void)_startIndoorOutdoorUpdates;
- (void)_stopIndoorOutdoorUpdates;
- (void)_lastKnownIndoorOutdoorStateWithHandler:;
@end
