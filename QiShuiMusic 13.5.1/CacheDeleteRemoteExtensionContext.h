@interface CacheDeleteRemoteExtensionContext : NSExtensionContext
- (id)init;
- (void)servicePing:;
- (void)serviceCancelPurge:;
- (void)serviceNotify:replyBlock:;
- (void)servicePeriodic:info:replyBlock:;
- (void)serviceCallback:replyBlock:;
- (void)servicePurge:info:replyBlock:;
- (void)servicePurgeable:info:replyBlock:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
