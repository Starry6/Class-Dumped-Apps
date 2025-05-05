@interface CBControllerSettings : NSObject
@property (nonatomic) NSInteger discoverableState;
@property (nonatomic) c hid15msWithHeadset;
@property (nonatomic) c setupAssistantIfNoKeyboard;
@property (nonatomic) c setupAssistantIfNoPointingDevice;
@property (nonatomic) c spatialSoundProfileAllowed;
- (void)encodeWithXPCObject:;
- (id)descriptionWithLevel:;
- (id)initWithXPCObject:error:;
- (int)discoverableState;
- (id)description;
- (void)setDiscoverableState:;
- (char)hid15msWithHeadset;
- (void)setHid15msWithHeadset:;
- (char)setupAssistantIfNoKeyboard;
- (void)setSetupAssistantIfNoKeyboard:;
- (char)setupAssistantIfNoPointingDevice;
- (void)setSetupAssistantIfNoPointingDevice:;
- (char)spatialSoundProfileAllowed;
- (void)setSpatialSoundProfileAllowed:;
@end
