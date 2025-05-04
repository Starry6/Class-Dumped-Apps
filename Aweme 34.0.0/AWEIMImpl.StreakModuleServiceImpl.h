@interface AWEIMImpl.StreakModuleServiceImpl : HTSService
- (id)imStreakFlameInfoModelForConversation:;
- (id)imCanShowStreakFlameInfoModelForConversation:;
- (id)imCanShowStreakFlameInfoModelForIMConversation:;
- (id)imCanShowStreakInfoChatDataModelForConversation:;
- (id)imStreakDisplayManagerWithScene:;
- (id)imStreakDisplayManagerWithScene:attributes:streakIconHeight:isWithoutView:;
- (BOOL)enableConsecutiveChatDisplayWithConversation:peerUser:;
- (id)cachedIMStreakAttributedStringForKey:;
- (void)saveIMStreakAttributedString:forKey:;
- (BOOL)enableDisplayStreakForIMConversation:;
- (BOOL)switchEnableConsecutiveChatDisplayWithConversation:;
- (id)imStreakInfoChatDataModelForConversation:;
- (id)init;
- (void).cxx_destruct;
@end
