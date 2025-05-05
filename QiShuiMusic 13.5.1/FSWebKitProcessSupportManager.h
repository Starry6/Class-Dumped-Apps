@interface FSWebKitProcessSupportManager : NSObject
@property (nonatomic) NSXPCConnection hostConnection;
@property (nonatomic) NSXPCListener serverListener;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)ping:;
- (void)checkin;
- (void)setServerListener:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)serverListener;
- (id)hostConnection;
- (void)setHostConnection:;
- (void)userInstalledFontsInfo:reply:;
- (id)initWithXPCEndpoint:;
- (void)ping2:;
@end
