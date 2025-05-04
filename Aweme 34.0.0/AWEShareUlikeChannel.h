@interface AWEShareUlikeChannel : AWEShareBaseChannel
- (void)shareWithCompletion:;
- (id)shareImage;
- (id)makeItemWithStyle:inView:;
- (long long)shareCategory;
- (void)showSyncUlikeNotification:;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
+ (void)didLinkAction:enterFrom:;
@end
