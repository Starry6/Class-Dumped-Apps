@interface AWECommentLynxCreateCommentManager : NSObject
@property (nonatomic) BDXBridgeEventSubscriber subscriber;
- (void)__subscribeEvents;
- (void)__unsubscribeEvents;
- (void)__forwardCreateCommentWithDict:;
- (id)init;
- (void)dealloc;
- (id)subscriber;
- (void)setSubscriber:;
- (void).cxx_destruct;
+ (void)_aweLazyRegisterLoad;
+ (id)sharedInstance;
@end
