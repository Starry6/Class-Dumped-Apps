@interface AWEIMMessageConversationMixPhotoComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (id)isInitiateDataReady;
+ (BOOL)canCreateComponentWithContext:;
@end
