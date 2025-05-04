@interface AWEPluginInviteFriendsCustomImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)schemaWithInviteModel:;
- (BOOL)parseCallingServerResponse:;
- (void)bdp_inviteFriendsPanelWithModel:createCallback:dismissCallback:actionCallback:;
+ (id)sharedPlugin;
@end
