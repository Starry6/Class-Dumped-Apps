@interface EMDaemonBooster : NSObject
@property (nonatomic) EMRemoteConnection connection;
@property (nonatomic) NSString loggingDescription;
@property (nonatomic) NSProgress remoteBoost;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)loggingDescription;
- (id)initWithConnection:description:;
- (id)_newRemoteBoost;
- (void)setLoggingDescription:;
- (id)remoteBoost;
- (void)setRemoteBoost:;
+ (id)log;
@end
