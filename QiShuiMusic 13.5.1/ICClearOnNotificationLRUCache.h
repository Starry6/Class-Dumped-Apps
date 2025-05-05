@interface ICClearOnNotificationLRUCache : ICAtomicLRUCache
@property (nonatomic) <NSObject> notificationToken;
- (void)dealloc;
- (void).cxx_destruct;
- (id)notificationToken;
- (void)setNotificationToken:;
- (id)initWithMaxSize:notificationName:;
@end
