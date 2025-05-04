@interface AWEIMMessageMaskQuoteReplyComponent : AWEIMMessageContentMaskComponent
@property (nonatomic) AWEIMMessage originMessage;
@property (nonatomic) BOOL isJustDismissed;
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)onCellWillRenderForCurrentComponent;
- (void)setOriginMessage:;
- (id)originMessage;
- (void)p_updateViewHiddenProps;
- (BOOL)isCurrentMessage:;
- (BOOL)isJustDismissed;
- (void)setIsJustDismissed:;
- (id)displayMessage;
- (void)setScene:;
- (long long)scene;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
