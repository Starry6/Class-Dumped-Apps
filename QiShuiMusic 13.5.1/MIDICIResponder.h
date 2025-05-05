@interface MIDICIResponder : NSObject
@property (nonatomic) <MIDICIPropertyResponderDelegate> propertyDelegate;
@property (nonatomic) NSArray initiators;
@property (nonatomic) <MIDICIProfileResponderDelegate> profileDelegate;
@property (nonatomic) MIDICIDeviceInfo deviceInfo;
- (id)init;
- (id)deviceInfo;
- (BOOL)start;
- (void)stop;
- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (BOOL)sendProfile:onChannel:profileData:;
- (id)initWithDeviceInfo:profileDelegate:profileStates:supportProperties:;
- (BOOL)containsValidChannels:;
- (void)registerProfiles:;
- (id)getInitiators;
- (BOOL)notifyProfile:onChannel:isEnabled:;
- (BOOL)notifyProperty:onChannel:forSubscribers:;
- (id)initiators;
- (id)profileDelegate;
- (id)propertyDelegate;
- (void)setPropertyDelegate:;
+ (id)description;
@end
