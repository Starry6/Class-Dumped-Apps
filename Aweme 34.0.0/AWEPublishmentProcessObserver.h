@interface AWEPublishmentProcessObserver : NSObject
@property (nonatomic) NSMutableArray notificationTokens;
- (void)registerNotificationForName:usingBlock:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)notificationTokens;
- (void)setNotificationTokens:;
@end
