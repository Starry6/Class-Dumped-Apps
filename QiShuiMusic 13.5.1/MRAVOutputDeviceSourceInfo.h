@interface MRAVOutputDeviceSourceInfo : NSObject
@property (nonatomic) NSString routingContextUID;
@property (nonatomic) BOOL multipleBuiltInDevices;
- (id)routingContextUID;
- (BOOL)multipleBuiltInDevices;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithRoutingContextUID:multipleBuiltInDevices:;
@end
