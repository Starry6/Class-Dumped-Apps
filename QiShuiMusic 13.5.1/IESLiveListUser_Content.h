@interface IESLiveListUser_Content : IESLivePBBaseMessage
@property (nonatomic) IESLiveListUserPKContent pkContent;
@property (nonatomic) BOOL hasPkContent;
@property (nonatomic) IESLiveListUserLinkmicContent linkmicContent;
@property (nonatomic) BOOL hasLinkmicContent;
@property (nonatomic) IESLiveListUserLinkmicAudienceContent linkmicAudienceContent;
@property (nonatomic) BOOL hasLinkmicAudienceContent;
+ (id)descriptor;
@end
