@interface AWEIMMessageTabFriendConversationBannerComponent : AWEIMMessageTabCommonBannerComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (id)friendConversationBannerInteractor;
- (Class)interactorClass;
- (void)viewWillAppear;
- (void)updateBanner;
- (void)dismissBannerView;
@end
