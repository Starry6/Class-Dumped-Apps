@interface UIRemoteControlEvent : UIEvent
- (long long)subtype;
- (void)dealloc;
- (id)_windows;
- (void)_setSubtype:;
- (long long)type;
- (id)_init;
- (void)_simpleRemoteActionNotification:;
- (void)_sendEventToResponder:;
@end
