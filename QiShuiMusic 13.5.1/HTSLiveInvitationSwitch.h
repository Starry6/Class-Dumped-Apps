@interface HTSLiveInvitationSwitch : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) NSInteger gameKind;
@property (nonatomic) q gameId;
@property (nonatomic) q playKind;
@property (nonatomic) q status;
@property (nonatomic) NSString message;
@property (nonatomic) HTSLiveSwitchExtraBase extraBase;
@property (nonatomic) BOOL hasExtraBase;
@property (nonatomic) HTSLiveSwitchExtraForOpen extraForOpen;
@property (nonatomic) BOOL hasExtraForOpen;
@property (nonatomic) NSString idStr;
+ (id)descriptor;
@end
