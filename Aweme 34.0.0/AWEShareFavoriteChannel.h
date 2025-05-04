@interface AWEShareFavoriteChannel : AWEShareBaseChannel
- (void)shareWithCompletion:;
- (id)shareImage;
- (id)makeItemWithStyle:inView:;
- (id)shareTitleFromSettings;
- (id)aAWELiteUGSocialModuleAdapter;
- (id)aAWELiteUGMainModuleAdapter;
- (id)shareImageFromSettings;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
+ (Class)aAWELiteUGSocialModuleAdapterClass;
+ (Class)aAWELiteUGMainModuleAdapterClass;
@end
