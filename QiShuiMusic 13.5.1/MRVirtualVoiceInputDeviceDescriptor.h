@interface MRVirtualVoiceInputDeviceDescriptor : NSObject
@property (nonatomic) NSArray supportedFormats;
@property (nonatomic) NSDictionary defaultFormat;
@property (nonatomic) NSData data;
@property (nonatomic) _MRVoiceInputDeviceDescriptorProtobuf protobuf;
- (id)initWithProtobuf:;
- (id)data;
- (id)defaultFormat;
- (id)protobuf;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)description;
- (id)supportedFormats;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (id)_copyWithZone:usingConcreteClass:;
@end
