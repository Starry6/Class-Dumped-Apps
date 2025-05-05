@interface HTSLiveLinkmicThemedCompetitionMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger msgType;
@property (nonatomic) NSInteger contentOneOfCase;
@property (nonatomic) HTSLiveLinkmicThemedCompetitionStartContent startContent;
@property (nonatomic) HTSLiveLinkmicThemedCompetitionCloseContent closeContent;
@property (nonatomic) HTSLiveLinkmicThemedCompetitionScoreChangeContent scoreChangeContent;
@property (nonatomic) HTSLiveLinkmicThemedCompetitionOnceMoreContent onceMoreContent;
@property (nonatomic) HTSLiveLinkmicThemedCompetitionShowTimeStartContent showTimeStartContent;
@property (nonatomic) HTSLiveLinkmicThemedCompetitionShowTimeFinishContent showTimeFinishContent;
@property (nonatomic) HTSLiveLinkmicThemedCompetitionBannerMessageForPC bannerMessageForPc;
@property (nonatomic) HTSLiveLinkmicThemedCompetitionToastMessageForPC toastMessageForPc;
+ (id)descriptor;
@end
