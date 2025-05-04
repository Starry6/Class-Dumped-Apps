@interface AWEIMMessageNotice_Recall_Plugin : AWEIMFlexComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)attributedContent;
- (void)componentDidMounted:;
- (void)addKVO;
- (void)p_reEditRecalledMessage:;
- (id)recallAttributedTextForMessage:actionBlock:;
- (id)recallTextForMessage:;
- (id)addReEditAttributedTextForAttributedString:actionBlock:;
- (void)p_reloadDisplayWithCountDown;
+ (BOOL)canCreateComponentWithContext:;
@end
