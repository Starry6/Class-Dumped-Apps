@interface AWEIMOverseaUserMutingComponent : AWEIMComponentBase
@property (nonatomic) BOOL shouldMute;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShouldMute:;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (void)didFetchPeerFullDetailUser:;
- (void)__hideInputVC;
- (BOOL)shouldMute;
+ (BOOL)canCreateComponentWithContext:;
@end
