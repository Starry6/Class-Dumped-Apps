@interface C2SessionGroup : NSObject
@property (nonatomic) NSString configurationName;
@property (nonatomic) C2Session pinnedSessionAllowingExpiredDNS;
@property (nonatomic) C2Session pinnedSession;
@property (nonatomic) C2Session unpinnedSession;
@property (nonatomic) NSArray sessions;
@property (nonatomic) BOOL isEmpty;
- (id)sessionForOptions:;
- (id)configurationName;
- (BOOL)isEmpty;
- (id)sessions;
- (BOOL)removeSession:;
- (void)setConfigurationName:;
- (id)unpinnedSession;
- (void)setPinnedSession:;
- (id)initWithConfigurationName:;
- (void)setPinnedSessionAllowingExpiredDNS:;
- (void).cxx_destruct;
- (id)pinnedSessionAllowingExpiredDNS;
- (void)setUnpinnedSession:;
- (void)setSession:forOptions:;
- (id)pinnedSession;
@end
