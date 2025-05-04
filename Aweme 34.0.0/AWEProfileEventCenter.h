@interface AWEProfileEventCenter : NSObject
@property (nonatomic) NSMapTable eventToPublisherTable;
@property (nonatomic) {os_unfair_lock_s=I} lock;
- (void)subscribeEvent:subscriber:;
- (id)eventPublisher:;
- (id)eventToPublisherTable;
- (void)setEventToPublisherTable:;
- (id)init;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
@end
