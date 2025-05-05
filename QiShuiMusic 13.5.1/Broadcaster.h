@interface Broadcaster : NSProxy
@property (nonatomic) NSInteger curXPCMessagePriority;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)setCurXPCMessagePriority:;
- (int)curXPCMessagePriority;
- (id)methodSignatureForSelector:;
- (id)initWithNotifier:messageContext:protocol:targets:;
- (id)initWithNotifier:messageContext:protocol:targets:priority:;
- (id)initWithNotifier:messageContext:protocol:targets:priority:completion:;
- (void)forwardInvocation:;
- (void)sendXPCObject:;
@end
