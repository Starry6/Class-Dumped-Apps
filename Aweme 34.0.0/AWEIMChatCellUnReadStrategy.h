@interface AWEIMChatCellUnReadStrategy : NSObject
+ (id)getChatAvatarUrlList:config:;
+ (long long)getIMGroupIdWithChat:;
+ (void)cellUnreadStrategyWithChat:groupId:config:completion:;
+ (void)cellUnreadStrategyWithChat:config:completion:;
+ (void)p_cellUnreadStrategyWithChat:config:completion:;
+ (BOOL)enableCustomNumberStyle:;
+ (long long)p_getUnreadTypeWithChat:;
+ (long long)p_getUnreadCount:;
+ (long long)p_getBizUnreadTypeWithChat:;
+ (BOOL)shouldDemoteWithGroupId:;
@end
