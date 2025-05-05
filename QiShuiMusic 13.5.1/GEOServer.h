@interface GEOServer : NSObject
@property (nonatomic) GEODaemon daemon;
- (id)initWithDaemon:;
- (id)init;
- (id)daemon;
- (void)peerDidDisconnect:;
- (BOOL)handleIncomingMessage:withObject:fromPeer:;
- (void).cxx_destruct;
- (void)peerDidConnect:;
- (id)description;
+ (id)identifier;
+ (unsigned long long)launchMode;
+ (Class)peerClass;
@end
