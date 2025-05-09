@interface AWEIMUserPrivacyInfoManager : NSObject
@property (nonatomic) NSArray aliasWhitelist;
@property (nonatomic) BOOL isShowingAlert;
@property (nonatomic) NSDictionary aliasWhitelistDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)couldAccessAliasWithUser:scene:;
- (void)p_setup;
- (id)__displayNameForConversationID:ext:user:scene:;
- (id)__groupAliasWithUser:memberModel:conversationID:curLoginUid:;
- (id)aliasBlacklist;
- (id)aliasWhitelist;
- (id)aliasWhitelistDict;
- (id)aliasWithUser:scene:;
- (void)checkRepeatScene:;
- (id)displayNameWithUser:conversationID:scene:;
- (id)displayNameWithUser:conversationID:scene:ext:;
- (id)displayNameWithUser:scene:;
- (id)displayStringForConversationID:ext:aliasType:scene:user:;
- (void)modifyIsExistInWhiteList:;
- (id)p_groupAliasCacheKeyWithSourceUid:targetUid:conversationID:;
- (id)p_groupAliasWithUser:memberModel:conversationID:scene:;
- (void)setAliasWhitelist:;
- (void)setAliasWhitelistDict:;
- (void)setIsShowingAlert:;
- (void)showAlertWithAliasScene:;
- (id)whiltelist;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isShowingAlert;
+ (id)sharedUserPrivacyInfoManager;
@end
