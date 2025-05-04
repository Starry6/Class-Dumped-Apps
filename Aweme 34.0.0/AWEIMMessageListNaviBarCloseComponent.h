@interface AWEIMMessageListNaviBarCloseComponent : AWEIMComponentBase
@property (nonatomic) UIButton closeButton;
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
- (void)updateCloseCompletionBlock:;
- (void)p_closeButtonClick:;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (void).cxx_destruct;
- (void)setCloseButton:;
- (id)closeButton;
+ (BOOL)canCreateComponentWithContext:;
@end
