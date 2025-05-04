@interface AWEIMMessageListNaviBarBackComponent : AWEIMComponentBase
@property (nonatomic) UIButton backButton;
@property (nonatomic) @? completionBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (id)naviBarViewIntrinsicContentSize;
- (void)componentDidMounted:;
- (void)updateBackCompletionBlock:;
- (void)p_backButtonClick:;
- (id)backButton;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (void)setBackButton:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
