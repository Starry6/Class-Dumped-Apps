@interface MRGameControllerMessage : MRProtocolMessage
@property (nonatomic) _MRGameControllerMessageProtobuf event;
@property (nonatomic) Q controllerID;
- (BOOL)shouldLog;
- (id)event;
- (unsigned long long)type;
- (id)initWithGameControllerEvent:controllerID:;
- (unsigned long long)controllerID;
@end
