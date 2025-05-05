@interface ASDAppStoreService : NSObject
@property (nonatomic) <ASDAppStoreChangedObserver> observer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)removeMetricsForBadgeIDs:replyHandler:;
- (void)removeBadgeIDs:replyHandler:;
- (void)allBadgeIDsWithReplyHandler:;
- (void)badgeCountWithReplyHandler:;
- (void)setObserver:;
- (void).cxx_destruct;
- (void)addBadgeIDs:replyHandler:;
- (void)allBadgeMetricsWithReplyHandler:;
- (void)removeAllBadgeIDsWithReplyHandler:;
- (id)observer;
- (void)launchAppStoreWithURL:withReplyHandler:;
- (void)reloadWidgetOnConnectivityToEndpoint:parameters:replyHandler:;
+ (id)interface;
+ (id)defaultService;
@end
