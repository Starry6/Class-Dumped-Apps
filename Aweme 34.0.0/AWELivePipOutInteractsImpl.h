@interface AWELivePipOutInteractsImpl : NSObject
@property (nonatomic) BOOL hasListeners;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (void)teenModeDidChange:isLogout:;
- (void)rtvServiceWillBegin:;
- (void)rtvServiceDidBegin:;
- (void)rtvServiceWillFinish:;
- (void)rtvServiceDidFinish:;
- (BOOL)hasListeners;
- (void)setHasListeners:;
- (void)handleAntiAddictEnterNotification;
- (void)p_stopPip;
- (void)dealloc;
- (void)addListeners;
- (void)removeListeners;
+ (id)shareInstance;
@end
