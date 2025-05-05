@interface HTSLiveHighlightDataAnswer : IESLivePBBaseMessage
@property (nonatomic) NSString scene;
@property (nonatomic) q answerId;
@property (nonatomic) NSString question;
@property (nonatomic) NSString answer;
@property (nonatomic) q audienceNumber;
@property (nonatomic) NSString audienceNumberStr;
@property (nonatomic) NSString nickName;
@property (nonatomic) q anchorId;
@property (nonatomic) q commenterId;
@property (nonatomic) q questionMsgId;
@property (nonatomic) q answerMsgId;
@property (nonatomic) HTSLivePinCommon pinCommon;
@property (nonatomic) BOOL hasPinCommon;
+ (id)descriptor;
@end
