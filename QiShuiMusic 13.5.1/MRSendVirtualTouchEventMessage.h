@interface MRSendVirtualTouchEventMessage : MRProtocolMessage
@property (nonatomic) {_MRHIDTouchEvent=(_MRHIDPoint={?=ff}[2f])IQI} event;
@property (nonatomic) Q virtualDeviceID;
- (id)event;
- (unsigned long long)type;
- (id)initWithTouchEvent:virtualDeviceID:;
- (unsigned long long)virtualDeviceID;
@end
