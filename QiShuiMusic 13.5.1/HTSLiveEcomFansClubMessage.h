@interface HTSLiveEcomFansClubMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger action;
@property (nonatomic) HTSLiveUserInfo user;
@property (nonatomic) BOOL hasUser;
+ (id)descriptor;
@end
