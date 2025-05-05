@interface AFDeviceCapabilities : NSObject
@property (nonatomic) q voiceTriggerEnabled;
- (long long)voiceTriggerEnabled;
- (id)initWithSerializedBackingStore:;
- (id)initWithVoiceTriggerEnabled:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)serializedBackingStore;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
