@interface MRUnregisterGameControllerMessage : MRProtocolMessage
@property (nonatomic) Q controllerID;
- (unsigned long long)type;
- (unsigned long long)controllerID;
- (id)initWithControllerID:;
@end
