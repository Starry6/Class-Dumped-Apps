@interface MRAdjustVolumeMessage : MRProtocolMessage
@property (nonatomic) q adjustment;
@property (nonatomic) NSString outputDeviceUID;
- (id)outputDeviceUID;
- (long long)adjustment;
- (unsigned long long)type;
- (id)initWithAdjustment:outputDeviceUID:;
@end
