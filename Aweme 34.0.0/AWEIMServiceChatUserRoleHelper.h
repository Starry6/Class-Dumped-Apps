@interface AWEIMServiceChatUserRoleHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isServiceBussinessRole:;
- (BOOL)isServiceBussinessRoleIDs:;
- (BOOL)isCServiceChatRole:;
- (BOOL)canShowOnlineDot:;
- (id)abResultString:;
- (BOOL)isServiceBusinessRoleWithoutExpr:;
- (id)constructUserRolesParam:conversation:;
- (BOOL)canDisplayEnterpriseNonFriendActiveStatus:nonFriendActiveInfo:;
- (BOOL)enableShowBlueVWithRoleIds:peerUser:;
- (BOOL)enableShowYellowVWithRoleIds:peerUser:;
+ (BOOL)enableToInsertServiceChatCard:;
+ (BOOL)disableUseVoipWithRoleIds:;
+ (id)disableUseVoipRoleIdToast;
+ (BOOL)isMigratedServiceBussinessRole:;
+ (BOOL)isServiceBusinessModeStateOpen:;
+ (id)sharedInstance;
@end
