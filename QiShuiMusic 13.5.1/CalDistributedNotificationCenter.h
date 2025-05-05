@interface CalDistributedNotificationCenter : NSObject
@property (nonatomic) NSMutableDictionary handlers;
- (id)handlers;
- (void)setHandlers:;
- (id)init;
- (void).cxx_destruct;
+ (void)removeObserver:;
+ (id)defaultCenter;
+ (void)_handleNotification:;
+ (void)removeObserver:name:;
+ (void)addObserver:selector:name:;
@end
