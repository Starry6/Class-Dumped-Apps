@interface AWEIMMessageListComponentCenter : NSObject
@property (nonatomic) NSMutableArray components;
@property (nonatomic) NSHashTable weakChannelListeners;
@property (nonatomic) <AWEIMMessageListComponent> host;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)weakChannelListeners;
- (void)addChannelListener:;
- (void)setWeakChannelListeners:;
- (void)setHost:;
- (id)host;
- (id)init;
- (void)setComponents:;
- (void)addComponents:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (void)addComponent:;
- (id)components;
@end
