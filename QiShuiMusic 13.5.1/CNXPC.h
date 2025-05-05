@interface CNXPC : NSObject
+ (void)addAllowedClasses:toInterface:forSelector:argumentIndex:ofReply:;
+ (id)resumedConnectionForServiceName:remoteObjectInterfaceProtocol:;
+ (id)listenerDelegateWithExportedObject:exportedInterfaceProtocol:;
@end
