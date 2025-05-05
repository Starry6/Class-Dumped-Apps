@interface MIDICIDeviceInfo : NSObject
@property (nonatomic) NSData manufacturerID;
@property (nonatomic) NSData family;
@property (nonatomic) NSData modelNumber;
@property (nonatomic) NSData revisionLevel;
@property (nonatomic) I midiDestination;
- (id)family;
- (id)modelNumber;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)manufacturerID;
- (id)initWithDestination:manufacturer:family:model:revision:;
- (id)initWithDestination:deviceID:;
- (id)asDeviceIDStruct;
- (id)revisionLevel;
- (unsigned int)midiDestination;
+ (BOOL)supportsSecureCoding;
+ (id)description;
@end
