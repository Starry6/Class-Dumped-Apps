@interface AWEIMMuteSettingsUtility : NSObject
+ (long long)muteSettingsMaskOfConversation:;
+ (long long)foldGroupChatExpOptionValue;
+ (BOOL)enableSubscribeUnreadCountOnMuteOfConversation:;
+ (void)presentMuteSettingsVCOnViewController:ofConversation:extraParams:;
+ (long long)muteSettingsSourceMaskOfConversation:;
+ (id)muteStringFromMuteSettingMask:;
+ (id)muteSettingsTypeToIdentifierDict;
+ (BOOL)__enableSubscribeUnreadCountOnMuteWithMute:;
+ (BOOL)shouldBeDealAsMuteCauseIsFoldedConversation:;
+ (void)__updateDefaultMuteConfigWithConversation:muteConfigString:;
+ (id)muteSettingsIdentifierToTypeDict;
+ (long long)muteSettingsMaskOfCurrentUnreadMessageInConversation:subscribeUnreadCountsOnMute:;
+ (BOOL)isHintTypeGroupOwnerMessage:;
+ (BOOL)isAutoSyncMessage:;
+ (BOOL)isAtMeMessage:;
+ (BOOL)isGroupOwnerRedPocketMessage:withConversation:;
+ (BOOL)isHintTypeGroupOwnerMessageWithIESMessage:;
+ (BOOL)isGroupOwnerRedPocketMessageWithIESMessage:conversation:;
+ (BOOL)isAutoSyncMessageWithIESMessage:;
+ (BOOL)isAtMeMessageWithIESMessage:;
+ (BOOL)enableSubscribeUnreadCountOnMuteOfBaseConversationModel:;
+ (long long)muteSettingsMaskOfCurrentUnreadMessageInConversation:;
+ (BOOL)isImportantMessage:inConversation:forMuteSettingsType:;
+ (BOOL)isAirbornImportantMessage:forMuteSettingsType:conversation:;
+ (BOOL)isAirbornImportantIESMessage:mask:conversation:;
+ (long long)typeForImportantMessage:conversation:;
+ (BOOL)isContainOwnerAtMeMessage:;
@end
