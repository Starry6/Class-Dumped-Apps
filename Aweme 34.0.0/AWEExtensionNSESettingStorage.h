@interface AWEExtensionNSESettingStorage : AWEExtensionStorage
- (BOOL)enablePushPreload;
- (BOOL)ignoreReadedIMPush;
- (id)avatarStrictModeKey;
- (id)ignoreReadedIMPushKey;
- (id)pushPreloadKey;
- (BOOL)getAvatarStrictMode;
- (void)setAvatarStrictMode:;
- (void)setIgnoreReadedIMPush:;
- (void)setEnablePushPreload:;
+ (id)sharedNSESettingStorage;
@end
