@interface WidgetKit._WidgetExtensionBaseContext : NSExtensionContext
- (id)init;
- (id)initWithInputItems:listenerEndpoint:contextUUID:;
- (void).cxx_destruct;
- (id)initWithInputItems:;
- (id)initWithInputItems:contextUUID:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (BOOL)_shouldSendHostApplicationStateNotifications;
@end
