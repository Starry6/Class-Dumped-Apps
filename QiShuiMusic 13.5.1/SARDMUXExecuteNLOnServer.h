@interface SARDMUXExecuteNLOnServer : SARDExecuteNLOnServer
@property (nonatomic) BOOL markedForHandOff;
@property (nonatomic) BOOL muxStateRollback;
@property (nonatomic) NSString selectedUserId;
@property (nonatomic) NSString selectedUserIdentityClassification;
@property (nonatomic) SAConfidenceScores voiceIDConfidenceScores;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)markedForHandOff;
- (void)setMarkedForHandOff:;
- (BOOL)muxStateRollback;
- (void)setMuxStateRollback:;
- (id)selectedUserId;
- (void)setSelectedUserId:;
- (id)selectedUserIdentityClassification;
- (void)setSelectedUserIdentityClassification:;
- (id)voiceIDConfidenceScores;
- (void)setVoiceIDConfidenceScores:;
@end
