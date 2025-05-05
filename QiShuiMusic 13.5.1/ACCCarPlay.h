@interface ACCCarPlay : NSObject
@property (nonatomic) NSXPCConnection xpcConnection;
- (void)setXpcConnection:;
- (id)xpcConnection;
- (void).cxx_destruct;
- (id)_init;
- (void)isCarPlayPairedWithCertSerial:withReply:;
- (void)isWirelessCarPlayAllowedForCertSerial:withReply:;
- (void)carPlayAppLinksStateForCertSerial:withReply:;
- (void)carPlayIconStateForCertSerial:andAppCategories:withReply:;
- (void)carPlayStartSessionForConnectionID:properties:;
- (void)filterMatchingDigitalCarKeys:forAccessory:withCompletionHandler:;
+ (id)sharedManager;
@end
