@interface FansclubMeResult_AnchorClubTaskSwitch : IESLivePBBaseMessage
@property (nonatomic) BOOL hitAb;
@property (nonatomic) BOOL hasPermission;
@property (nonatomic) BOOL isClosed;
+ (id)descriptor;
@end
