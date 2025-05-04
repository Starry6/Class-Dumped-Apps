@interface AWEECOMIMDynamicCardErrorView : UIView
@property (nonatomic) UILabel promptLabel;
@property (nonatomic) UIImageView errorIamgeView;
- (id)errorIamgeView;
- (void)updateErrorViewWithType:unSupportStr:isSystemCard:;
- (void)setErrorIamgeView:;
- (id)promptLabel;
- (void)setPromptLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)errorViewSizeWithType:unSupportStr:isSystemCard:;
@end
