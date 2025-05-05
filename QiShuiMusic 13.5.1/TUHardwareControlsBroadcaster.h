@interface TUHardwareControlsBroadcaster : NSObject
@property (nonatomic) NSString eventTypeToIgnore;
- (void)setEventTypeToIgnore:;
- (id)init;
- (void)dealloc;
- (void)longPressTimerFired:;
- (void).cxx_destruct;
- (id)eventTypeToIgnore;
@end
