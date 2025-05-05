@interface MRRegisterGameControllerMessage : MRProtocolMessage
@property (nonatomic) _MRGameControllerPropertiesProtobuf properties;
- (id)initWithProperties:;
- (unsigned long long)type;
- (id)properties;
@end
