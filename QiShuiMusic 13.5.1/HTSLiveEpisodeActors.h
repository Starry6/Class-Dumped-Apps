@interface HTSLiveEpisodeActors : IESLivePBBaseMessage
@property (nonatomic) q userId;
@property (nonatomic) NSString name;
@property (nonatomic) HTSLiveImage avatar;
@property (nonatomic) BOOL hasAvatar;
@property (nonatomic) q verifyType;
@property (nonatomic) NSString label;
+ (id)descriptor;
@end
