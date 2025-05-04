@interface AWETextView : UITextView
@property (nonatomic) BOOL cutFlag;
@property (nonatomic) @? exceptionRange;
@property (nonatomic) BOOL disablePerformActions;
- (void)cut:;
- (BOOL)cutFlag;
- (void)setCutFlag:;
- (id)exceptionRange;
- (id)textRectOfRange:;
- (BOOL)disablePerformActions;
- (void)setExceptionRange:;
- (void)setDisablePerformActions:;
- (void)acc_aweTextView_cut:;
- (id)accessibilityLabel;
- (BOOL)pointInside:withEvent:;
- (void).cxx_destruct;
- (BOOL)canPerformAction:withSender:;
- (id)accessibilityValue;
+ (void)_aweLazyRegisterLoad_Cut;
@end
