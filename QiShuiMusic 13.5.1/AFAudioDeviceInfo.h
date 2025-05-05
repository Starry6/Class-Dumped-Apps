@interface AFAudioDeviceInfo : NSObject
@property (nonatomic) NSString route;
@property (nonatomic) BOOL isRemoteDevice;
@property (nonatomic) NSUUID deviceUID;
- (id)deviceUID;
- (id)init;
- (id)route;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithRoute:isRemoteDevice:deviceUID:;
- (BOOL)isRemoteDevice;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
