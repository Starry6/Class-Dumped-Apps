@interface IESLivePinCommentAnswerParams : NSObject
@property (nonatomic) NSString nickName;
@property (nonatomic) NSString mixUserId;
@property (nonatomic) NSString userNums;
@property (nonatomic) NSString describe;
@property (nonatomic) NSString content;
@property (nonatomic) q answerMsgId;
@property (nonatomic) q msgId;
@property (nonatomic) NSString scene;
- (void)setAnswerMsgId:;
- (long long)answerMsgId;
- (id)mixUserId;
- (void)setDescribe:;
- (void)setMixUserId:;
- (void)setUserNums:;
- (id)userNums;
- (id)content;
- (void)setContent:;
- (void)setScene:;
- (id)scene;
- (id)nickName;
- (void).cxx_destruct;
- (void)setNickName:;
- (id)describe;
- (long long)msgId;
- (void)setMsgId:;
@end
