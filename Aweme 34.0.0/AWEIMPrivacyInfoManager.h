@interface AWEIMPrivacyInfoManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)displayNameWithUser:scene:;
- (id)displayNameWithUser:conversationID:scene:;
- (id)aliasWithUser:scene:;
- (id)groupAliasWithUser:conversationID:scene:;
- (void)updateGroupAliasCacheWithGroupAlias:userID:conversationID:;
- (BOOL)protectedTurnedOn;
- (id)groupAliasPinYinSearchObjWithUser:conversationID:scene:;
- (id)displayNameWithUser:conversationID:scene:ext:;
- (void)removeGroupAliasCacheWithUserIDs:conversationID:;
- (id)aliasPinYinSearchObjWithUser:scene:;
+ (id)sharedIMPrivacyInfoManager;
@end
