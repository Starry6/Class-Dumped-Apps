@interface AWEIMInputBarCustomPlaceholderComponent : AWEIMComponentBase
@property (nonatomic) AWEIMConversationContext conversationContext;
@property (nonatomic) NSObject<OS_dispatch_semaphore> semaphoreLock;
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} mutex;
@property (nonatomic) NSDictionary priorty_placeholder;
@property (nonatomic) NSSortDescriptor sortDescriptor;
@property (nonatomic) AWEIMComponentManager componentManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentContext;
- (id)componentsNameArrayWithContext:;
- (void)setComponentManager:;
- (void)componentDidMounted:;
- (id)customPlaceholder;
- (void)setMutex:;
- (id)semaphoreLock;
- (void)setSemaphoreLock:;
- (void)updateWithPlaceholder:priority:;
- (id)priorty_placeholder;
- (void)setPriorty_placeholder:;
- (void)__updateInputBar;
- (id)init;
- (void)dealloc;
- (id)sortDescriptor;
- (void).cxx_destruct;
- (id)mutex;
- (id)conversationContext;
- (void)setConversationContext:;
- (void)setSortDescriptor:;
- (id)componentManager;
@end
