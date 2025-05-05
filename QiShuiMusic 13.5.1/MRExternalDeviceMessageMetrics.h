@interface MRExternalDeviceMessageMetrics : NSObject
- (void)dealloc;
- (void)write;
- (void).cxx_destruct;
- (id)initWithPath:;
- (void)addMessage:data:;
@end
