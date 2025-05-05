@interface ACCAppLinksIconInfo : NSObject
@property (nonatomic) NSXPCConnection xpcConnection;
- (id)init;
- (void)setXpcConnection:;
- (id)xpcConnection;
- (void).cxx_destruct;
- (id)_init;
- (void)getIconDataForBundleID:forIconSize:withReply:;
+ (id)sharedManager;
@end
