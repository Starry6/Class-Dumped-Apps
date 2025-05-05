@interface GetWebcastInfoResponse_WebcastInfo : IESLivePBBaseMessage
@property (nonatomic) q roomId;
@property (nonatomic) NSString anchorOpenId;
@property (nonatomic) NSString avatarURL;
@property (nonatomic) NSString nickName;
+ (id)descriptor;
@end
