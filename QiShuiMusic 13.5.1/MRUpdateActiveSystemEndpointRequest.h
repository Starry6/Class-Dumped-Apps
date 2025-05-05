@interface MRUpdateActiveSystemEndpointRequest : NSObject
@property (nonatomic) NSString clientBundleIdentifier;
@property (nonatomic) BOOL pairedDeviceSync;
@property (nonatomic) _MRUpdateActiveSystemEndpointRequestProtobuf protobuf;
@property (nonatomic) NSString outputDeviceUID;
@property (nonatomic) NSString reason;
@property (nonatomic) q changeType;
- (id)clientBundleIdentifier;
- (long long)changeType;
- (id)initWithProtobuf:;
- (void)setPairedDeviceSync:;
- (id)protobuf;
- (id)reason;
- (void)setOutputDeviceUID:;
- (void)setReason:;
- (id)outputDeviceUID;
- (void)setChangeType:;
- (id)initWithOutputDeviceUID:reason:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isPairedDeviceSync;
- (void)setClientBundleIdentifier:;
- (void)perform:completion:;
- (id)copyWithZone:;
@end
