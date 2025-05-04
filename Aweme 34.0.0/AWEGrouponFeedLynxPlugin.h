@interface AWEGrouponFeedLynxPlugin : AWEGrouponFeedBasePlugin
@property (nonatomic) NSMutableDictionary subscriberMap;
- (id)subscriberMap;
- (void)setSubscriberMap:;
- (void)registerEventSubscribers;
- (void)removeEventSubscriber;
- (void)deleteCardHandler:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
