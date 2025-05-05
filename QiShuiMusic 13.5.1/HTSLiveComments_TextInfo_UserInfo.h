@interface HTSLiveComments_TextInfo_UserInfo : IESLivePBBaseMessage
@property (nonatomic) q userId;
@property (nonatomic) NSString name;
@property (nonatomic) HTSLiveImage avatar;
@property (nonatomic) BOOL hasAvatar;
+ (id)descriptor;
@end
