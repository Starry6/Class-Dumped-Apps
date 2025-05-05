@interface HTSLiveAnswerReviewMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger answerReviewMsgTypeEnum;
@property (nonatomic) q answerId;
@property (nonatomic) q chatId;
@property (nonatomic) NSInteger answerReviewResTypeEnum;
@property (nonatomic) q videoPinId;
@property (nonatomic) q originalMsgId;
@property (nonatomic) q pinId;
+ (id)descriptor;
@end
