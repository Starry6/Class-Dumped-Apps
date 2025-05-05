@interface MRAVOutputDeviceDescription : NSObject
@property (nonatomic) _MRAVOutputDeviceDescriptorProtobuf descriptor;
@property (nonatomic) I deviceType;
@property (nonatomic) I deviceSubtype;
@property (nonatomic) NSString uid;
@property (nonatomic) NSString name;
@property (nonatomic) NSString composedTypeDescription;
@property (nonatomic) NSString modelID;
- (unsigned int)deviceType;
- (id)descriptor;
- (id)uid;
- (id)modelID;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)name;
- (unsigned int)deviceSubtype;
- (BOOL)isEqual:;
- (id)initWithDeviceType:deviceSubtype:uid:;
- (id)initWithDeviceType:deviceSubtype:uid:name:;
- (id)initWithDeviceType:deviceSubtype:uid:name:modelID:;
- (id)composedTypeDescription;
@end
