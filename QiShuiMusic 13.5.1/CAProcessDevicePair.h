@interface CAProcessDevicePair : NSObject
@property (nonatomic) NSInteger processID;
@property (nonatomic) NSString deviceUID;
- (int)processID;
- (id)deviceUID;
- (void).cxx_destruct;
- (id)initWithProcessID:andDeviceUID:;
@end
