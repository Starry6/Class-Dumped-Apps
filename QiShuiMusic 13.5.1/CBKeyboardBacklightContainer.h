@interface CBKeyboardBacklightContainer : CBContainer
@property (nonatomic) HIDDevice device;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)removeHIDServiceClient:;
- (BOOL)addHIDServiceClient:;
- (id)copyPropertyInternalForKey:;
- (id)copyIdentifiers;
- (BOOL)handleHIDEvent:from:;
- (void)dealloc;
- (BOOL)start;
- (void)stop;
- (id)copyPropertyForKey:;
- (BOOL)setPropertyInternal:forKey:;
- (BOOL)setProperty:forKey:;
- (id)initWithDevice:;
- (void)sendNotificationForKey:andValue:;
- (id)device;
- (id)newKeyboardBacklightWithQueue:device:;
- (BOOL)keyboardUsesNitUnits:;
- (void)keyboardBacklightInitialization;
@end
