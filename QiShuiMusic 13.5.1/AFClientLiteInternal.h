@interface AFClientLiteInternal : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id)handleCommand:completion:;
- (id)initAndHandleCommand:afterCurrentRequest:isOneWay:commandHandler:completion:;
- (void)_handleCommand:afterCurrentRequest:isOneWay:completion:;
@end
