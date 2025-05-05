@interface MRAVOutputContextModification : NSObject
@property (nonatomic) Q modificationType;
@property (nonatomic) NSArray concreteOutputDevices;
@property (nonatomic) NSArray outputDevices;
@property (nonatomic) NSArray outputDeviceUIDs;
@property (nonatomic) NSArray avOutputDevices;
@property (nonatomic) NSString password;
@property (nonatomic) NSString initiator;
@property (nonatomic) BOOL shouldFadeAudio;
- (void)setPassword:;
- (id)password;
- (id)outputDevices;
- (id)initWithCoder:;
- (void)setInitiator:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initiator;
- (id)description;
- (id)concreteOutputDevices;
- (id)outputDeviceUIDs;
- (unsigned long long)modificationType;
- (id)initWithType:devices:;
- (void)modifyWithOutputContext:queue:completion:;
- (id)avOutputDevices;
- (BOOL)shouldFadeAudio;
- (void)setShouldFadeAudio:;
+ (BOOL)supportsSecureCoding;
@end
