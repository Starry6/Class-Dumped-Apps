@interface CBMutableCharacteristic : CBCharacteristic
@property (nonatomic) NSNumber ID;
@property (nonatomic) Q permissions;
@property (nonatomic) NSArray subscribedCentrals;
@property (nonatomic) Q properties;
@property (nonatomic) NSData value;
@property (nonatomic) NSArray descriptors;
- (void)setID:;
- (id)ID;
- (void)dealloc;
- (id)initWithType:properties:value:permissions:;
- (id)initWithService:dictionary:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)subscribedCentrals;
- (unsigned long long)permissions;
- (void).cxx_destruct;
- (void)setPermissions:;
- (void)handlePowerNotOn;
- (id)description;
- (BOOL)handleCentralSubscribed:;
- (BOOL)handleCentralUnsubscribed:;
@end
