@interface AWEIMConsecutiveChatIcon : NSObject
+ (id)configKeyWithStateKey:;
+ (id)urlWithConfigKey:;
+ (id)p_urlWithConfigKey:;
+ (id)p_iconImageWithURL:;
+ (id)iconImageWithConfigKey:;
+ (void)prefetchIcons;
+ (id)iconImageWithLevel:flamePetElfIconName:;
+ (id)textColorWithKey:inTheme:;
@end
