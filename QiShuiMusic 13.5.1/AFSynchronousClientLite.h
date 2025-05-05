@interface AFSynchronousClientLite : AFClientLite
- (void)_handleCommand:afterCurrentRequest:isOneWay:commandHandler:completion:;
@end
