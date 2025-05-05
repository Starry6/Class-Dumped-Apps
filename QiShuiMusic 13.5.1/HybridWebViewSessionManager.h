@interface HybridWebViewSessionManager : NSObject
@property (nonatomic) NSMutableDictionary sessions;
@property (nonatomic) NSMutableDictionary containerIDToSessionIDDic;
@property (nonatomic) NSMutableDictionary sessionIDToFirstJumpDictionary;
@property (nonatomic) NSString closingSession;
- (void)closeSessionWithContainerID:animated:;
- (void)closeSessionWithContainerID:animated:excludeContaienrIDs:;
- (void)closeSessionWithSessionID:animated:;
- (void)closeSessionWithSessionID:animated:excludeContaienrIDs:;
- (id)closingSession;
- (id)containerIDToSessionIDDic;
- (id)firstJumpURLForContainerID:;
- (id)firstJumpURLForSession:;
- (void)registerContainerID:inSession:;
- (void)registerSession:withFirstJumpURLString:;
- (id)sessionIDForContainerID:;
- (id)sessionIDToFirstJumpDictionary;
- (void)setClosingSession:;
- (void)setContainerIDToSessionIDDic:;
- (void)setSessionIDToFirstJumpDictionary:;
- (void)setSessions:;
- (id)init;
- (id)sessions;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
