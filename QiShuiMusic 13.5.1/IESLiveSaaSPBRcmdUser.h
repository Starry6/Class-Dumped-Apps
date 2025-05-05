@interface IESLiveSaaSPBRcmdUser : GPBMessage
@property (nonatomic) NSNumber roomID;
@property (nonatomic) NSString user;
@property (nonatomic) NSString textBeforeAction;
@property (nonatomic) NSString textAfterAction;
@property (nonatomic) NSString authenticationInfo;
@property (nonatomic) NSString editScript;
- (id)userModel;
- (id)roomID;
- (void)setRoomID:;
+ (id)descriptor;
@end
