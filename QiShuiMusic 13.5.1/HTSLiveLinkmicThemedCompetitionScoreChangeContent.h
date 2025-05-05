@interface HTSLiveLinkmicThemedCompetitionScoreChangeContent : IESLivePBBaseMessage
@property (nonatomic) NSString mixScoreChangeUserId;
@property (nonatomic) IESLiveThemedCompetitionInfo info;
@property (nonatomic) BOOL hasInfo;
@property (nonatomic) NSString scoreChangeOpenId;
@property (nonatomic) HTSLiveLinkmicQuickInteract quickInteract;
@property (nonatomic) BOOL hasQuickInteract;
@property (nonatomic) HTSLiveLinkmicThemedCompetitionScoreChangeContent_WinContent newAdvanceUser;
@property (nonatomic) BOOL hasNewAdvanceUser;
- (id)mixScoreChangeUserId;
+ (id)descriptor;
@end
