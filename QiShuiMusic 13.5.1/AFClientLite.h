@interface AFClientLite : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleCommand:afterCurrentRequest:isOneWay:commandHandler:completion:;
- (void)handleCommand:afterCurrentRequest:commandHandler:completion:;
- (void)handleOneWayCommand:commandHandler:completion:;
- (void)handleCommand:commandHandler:completion:;
@end
