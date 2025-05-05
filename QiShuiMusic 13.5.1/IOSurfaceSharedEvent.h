@interface IOSurfaceSharedEvent : NSObject
@property (nonatomic) Q signaledValue;
@property (nonatomic) I eventPort;
@property (nonatomic) Q globalTraceObjectID;
- (unsigned long long)globalTraceObjectID;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned int)eventPort;
- (void)setSignaledValue:;
- (id)initWithMachPort:;
- (void)notifyListener:atValue:block:;
- (unsigned long long)signaledValue;
- (BOOL)waitUntilSignaledValue:timeoutMS:;
+ (BOOL)supportsSecureCoding;
@end
