@interface GetLinkerUserResponse_LinkerUserInfo : IESLivePBBaseMessage
@property (nonatomic) NSString openId;
@property (nonatomic) NSString avatarURL;
@property (nonatomic) NSString nickName;
+ (id)descriptor;
@end
