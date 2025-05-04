@interface AWEIMMessageListNaviBarConfirmComponent : AWEIMComponentBase
@property (nonatomic) IESIMButton confirmButton;
@property (nonatomic) @? confirmCompletionBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostVC_viewWillAppear;
- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (void)componentDidMounted:;
- (void)p_updateUI;
- (void)updateWithConfirmCompletion:;
- (void)setConfirmCompletionBlock:;
- (id)confirmCompletionBlock;
- (void)p_confirmButtonClicked:;
- (void).cxx_destruct;
- (id)confirmButton;
- (void)setConfirmButton:;
+ (BOOL)canCreateComponentWithContext:;
@end
