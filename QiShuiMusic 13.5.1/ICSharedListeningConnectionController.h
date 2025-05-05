@interface ICSharedListeningConnectionController : NSObject
@property (nonatomic) NSString sessionIdentifier;
@property (nonatomic) NSString sessionToken;
@property (nonatomic) NSURL inviteURL;
@property (nonatomic) NSString bundleID;
@property (nonatomic) ICLiveLinkIdentity identity;
@property (nonatomic) <ICSharedListeningConnectionControllerDelegate> delegate;
- (id)identity;
- (void)sendMessage:;
- (void)start;
- (id)sessionIdentifier;
- (void)setDelegate:;
- (void)stop;
- (void)setSessionIdentifier:;
- (id)delegate;
- (void).cxx_destruct;
- (id)bundleID;
- (id)sessionToken;
- (void)setSessionToken:;
- (id)inviteURL;
- (void)setInviteURL:;
- (id)initWithSessionIdentifier:identity:bundleID:;
+ (id)externalSharedListeningConnectionWithSessionIdentifier:identity:bundleID:;
+ (id)sharedListeningConnectionWithSessionIdentifier:identity:bundleID:;
@end
