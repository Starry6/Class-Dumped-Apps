@interface FontPickerSupporter : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSXPCListenerEndpoint clientEndpoint;
@property (nonatomic) NSMutableSet activatedFontFilePaths;
@property (nonatomic) BOOL clientHasFontAccessEntitlement;
- (void)checkin:;
- (id)initWithEndpoint:;
- (void)setup;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)done;
- (void)synchronize:deactivated:includingFontAssets:;
- (BOOL)clientHasFontAccessEntitlement:;
- (id)clientEndpoint;
- (void)setClientEndpoint:;
- (id)activatedFontFilePaths;
- (void)setActivatedFontFilePaths:;
- (BOOL)clientHasFontAccessEntitlement;
- (void)setClientHasFontAccessEntitlement:;
@end
