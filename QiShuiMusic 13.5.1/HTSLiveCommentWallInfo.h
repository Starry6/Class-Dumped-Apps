@interface HTSLiveCommentWallInfo : IESLivePBBaseMessage
@property (nonatomic) NSString content;
@property (nonatomic) q id_p;
@property (nonatomic) q commentMsgId;
@property (nonatomic) q commenterId;
@property (nonatomic) NSString commenterNickname;
@property (nonatomic) q eventTime;
@property (nonatomic) q msgTime;
@property (nonatomic) q endTime;
@property (nonatomic) NSInteger countdownStyle;
@property (nonatomic) NSString operatorOpenid;
@property (nonatomic) NSString operatorNickname;
+ (id)descriptor;
@end
