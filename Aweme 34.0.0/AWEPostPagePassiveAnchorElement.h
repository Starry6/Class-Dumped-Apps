@interface AWEPostPagePassiveAnchorElement : AWEPostPageCellElement
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSDictionary extras;
- (void)addAIAnchorWithType:anchorDismissBlock:;
- (void)didSelectExternalAnchorWithType:anchorDismissBlock:enterFromType:;
- (void)refreshWithAnchorVM:;
- (BOOL)forceReceiveEvents;
- (id)anchor;
- (void)viewDidLoad;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)setupUI;
+ (void)_aweLazyRegisterPostPage;
+ (id)type;
@end
