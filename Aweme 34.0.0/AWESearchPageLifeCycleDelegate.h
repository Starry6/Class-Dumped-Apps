@interface AWESearchPageLifeCycleDelegate : NSObject
@property (nonatomic) SearchDynamicPageLifeCycleImpl lifeCycleImpl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)containerDidCreated:view:;
- (void)addNotifications;
- (id)willResolveScheme:context:;
- (void)startPlay:;
- (void)willLoop:;
- (void)handleNotificationsWithAction:userInfo:;
- (id)initWithLifeCycleImpl:;
- (id)lifeCycleImpl;
- (void)setLifeCycleImpl:;
- (void)stop:;
- (void)pause:;
- (void)close:;
- (void).cxx_destruct;
+ (void)_aweLazyRegisterLoadWhenDylibLoad;
+ (id)searchServiceID;
@end
