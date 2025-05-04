@interface AWEIMNormalImageQuoteReplyComponent : AWEIMNormalImageContentComponent
@property (nonatomic) AWEIMImageMessage originMessage;
@property (nonatomic) AWEIMNormalImageMessageViewModel originMessageViewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)setOriginMessage:;
- (id)originMessage;
- (void)didClickAssistanceButton:;
- (void)p_loadDetailMessageFrom:;
- (void)didTapCoverAction;
- (id)specializedViewModel;
- (void)setOriginMessageViewModel:;
- (id)originMessageViewModel;
- (id)displayMessage;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
