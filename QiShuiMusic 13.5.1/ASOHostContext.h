@interface ASOHostContext : NSExtensionContext
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)serviceContext;
- (void)presentOverlayWithConfiguration:delegate:reply:;
- (void)dismissOverlayWithReply:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
