@interface SGDSuggestManagerInterface : NSObject
+ (void)_addSGXPCResponseToReplyWhitelistForMethods:count:interface:;
+ (void)_registerWhitelistBlock:forProtocol:;
+ (void)interface:returnsArrayOf:forSelector:;
+ (void)_initialize;
+ (void)interface:returns:forSelector:;
+ (id)xpcInterfaceForProtocol:;
+ (id)xpcInterface;
+ (void)_addSGXPCResponseToReplyWhitelistForProtocol:interface:;
+ (void)_whitelistXPCInterface:forProtocol:alreadyWhitelisted:;
@end
