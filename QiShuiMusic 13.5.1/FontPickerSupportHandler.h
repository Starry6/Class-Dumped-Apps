@interface FontPickerSupportHandler : NSObject
@property (nonatomic) NSXPCListener listener;
@property (nonatomic) NSXPCListener listenerForFontServicesDaemon;
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)checkin:;
- (id)listener;
- (BOOL)listener:shouldAcceptNewConnection:;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)setListener:;
- (void)registeredFontsChanged:;
- (void)ping:reply:;
- (void)activateFontsForFontPickerClient:reply:;
- (BOOL)pathsContainsFontAsset:;
- (id)listenerForFontServicesDaemon;
- (void)setListenerForFontServicesDaemon:;
+ (id)sharedInstance;
@end
