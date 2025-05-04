@interface AWEIMMessageListNaviBarFullScreenComponent : AWEIMComponentBase
@property (nonatomic) UIButton fullButton;
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
- (id)fullButton;
- (void)setFullButton:;
- (void)updateFullScreenCompletionBlock:;
- (void)p_fullButtonClick:;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
