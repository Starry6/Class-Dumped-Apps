@interface IESLiveSaaSPBInvitationSwitch : GPBMessage
@property (nonatomic) q id_p;
@property (nonatomic) NSInteger gameKind;
@property (nonatomic) q gameId;
@property (nonatomic) q playKind;
@property (nonatomic) q status;
@property (nonatomic) NSString message;
@property (nonatomic) IESLiveSaaSPBSwitchExtraBase extraBase;
@property (nonatomic) BOOL hasExtraBase;
@property (nonatomic) IESLiveSaaSPBSwitchExtraForOpen extraForOpen;
@property (nonatomic) BOOL hasExtraForOpen;
@property (nonatomic) NSString idStr;
+ (id)descriptor;
@end
