@interface HTSLiveRoomAvator : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage avatar;
@property (nonatomic) BOOL hasAvatar;
@property (nonatomic) HTSLiveImage authenticationInfo;
@property (nonatomic) BOOL hasAuthenticationInfo;
@property (nonatomic) NSString nickName;
@property (nonatomic) BOOL hasFansClub;
@property (nonatomic) q followStatus;
@property (nonatomic) BOOL invalidFollowStatus;
@property (nonatomic) q followReportScene;
+ (id)descriptor;
@end
