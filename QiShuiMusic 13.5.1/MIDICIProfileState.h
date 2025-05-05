@interface MIDICIProfileState : NSObject
@property (nonatomic) C midiChannel;
@property (nonatomic) NSArray enabledProfiles;
@property (nonatomic) NSArray disabledProfiles;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithChannel:enabledProfiles:disabledProfiles:;
- (id)initWithEnabledProfiles:disabledProfiles:;
- (void)updateWithEnabledProfiles:disabledProfiles:;
- (id)bytesWithChannel:;
- (unsigned char)midiChannel;
- (id)enabledProfiles;
- (id)disabledProfiles;
+ (BOOL)supportsSecureCoding;
+ (id)description;
@end
