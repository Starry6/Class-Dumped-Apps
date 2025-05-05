@interface CKPKPushRegistry : NSObject
@property (nonatomic) NSHashTable delegates;
@property (nonatomic) PKPushRegistry pushRegistry;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addDelegate:;
- (id)delegates;
- (void)setDelegates:;
- (id)pushRegistry;
- (void)pushRegistry:didUpdatePushCredentials:forType:;
- (void)removeDelegate:;
- (void)pushRegistry:didReceiveIncomingPushWithPayload:forType:withCompletionHandler:;
- (void).cxx_destruct;
- (void)setPushRegistry:;
- (id)_init;
+ (id)sharedPushRegistry;
@end
