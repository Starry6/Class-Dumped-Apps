@interface AWEIMShareChannel : AWEShareBaseChannel
- (id)shareImageURL;
- (void)shareWithCompletion:;
- (id)shareImage;
- (id)normalImage;
- (id)makeItemWithStyle:inView:;
- (BOOL)prepareToShare;
- (long long)shareCategory;
- (id)trackingLabel;
- (id)aAWELiteUGSocialModuleAdapter;
- (id)aAWEUGKitModuleDOUYINAdapter;
- (void)showShareListWithCompletion:;
- (BOOL)isFromFeedLandscape;
- (BOOL)isFromLandscapeScene;
- (BOOL)checkIfSharedToSelf:;
- (void)showShareList;
- (id)smallImage;
- (id)shareType;
- (unsigned long long)titleAlign;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
+ (Class)aAWELiteUGSocialModuleAdapterClass;
+ (Class)aAWEUGKitModuleDOUYINAdapterClass;
+ (id)additionalShareMaskArray;
@end
