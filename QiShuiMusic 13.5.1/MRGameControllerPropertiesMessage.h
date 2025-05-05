@interface MRGameControllerPropertiesMessage : MRProtocolMessage
@property (nonatomic) _MRGameControllerPropertiesProtobuf properties;
@property (nonatomic) Q controllerID;
- (unsigned long long)type;
- (id)properties;
- (unsigned long long)controllerID;
- (id)initWithGameControllerProperties:controllerID:;
@end
