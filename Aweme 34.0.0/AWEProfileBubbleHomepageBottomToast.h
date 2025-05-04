@interface AWEProfileBubbleHomepageBottomToast : AWEUINotificationBarView
@property (nonatomic) NSNumber currentToastType;
@property (nonatomic) BOOL hasNotClosed;
@property (nonatomic) q priority;
- (void)setCurrentToastType:;
- (id)currentToastType;
- (BOOL)isUniqueURL:;
- (void)setHasNotClosed:;
- (id)pureURLWithURL:;
- (void)actionOnWechatBindWithURL:;
- (BOOL)hasNotClosed;
- (void)config;
- (long long)priority;
- (void)setPriority:;
- (void).cxx_destruct;
- (void)didShow;
@end
