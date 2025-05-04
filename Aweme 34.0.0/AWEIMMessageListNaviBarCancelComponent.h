@interface AWEIMMessageListNaviBarCancelComponent : AWEIMComponentBase
@property (nonatomic) AWEIMDUXSelectedAlphaButton cancelButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (void)componentDidMounted:;
- (void)p_cancelButtonClicked:;
- (void)setCancelButton:;
- (id)cancelButton;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
