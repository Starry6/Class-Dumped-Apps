@interface ENGroupContextNotifyingObserver : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) @? onGroupCreate;
@property (nonatomic) @? onGroupCache;
@property (nonatomic) @? onGroupUpdate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)initWithQueue:;
- (id)queue;
- (void)setOnGroupCreate:;
- (void)groupContext:didCreateGroup:;
- (void)groupContext:didCacheGroup:;
- (void)groupContext:didUpdateGroup:withNewGroup:;
- (id)onGroupCache;
- (void)setOnGroupCache:;
- (id)onGroupCreate;
- (id)onGroupUpdate;
- (void)setOnGroupUpdate:;
@end
