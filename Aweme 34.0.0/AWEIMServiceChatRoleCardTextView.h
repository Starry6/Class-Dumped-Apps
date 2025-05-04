@interface AWEIMServiceChatRoleCardTextView : UIView
@property (nonatomic) YYLabel textLabel;
@property (nonatomic) NSString content;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) @? tapExpandActionBlock;
- (void)updateTextLabelWithText:;
- (id)p_getVisibleRangeText:appendText:;
- (void)p_setAlignmentCenter;
- (id)tapExpandActionBlock;
- (void)setTapExpandActionBlock:;
- (id)textLabel;
- (void)setIsExpanded:;
- (id)init;
- (BOOL)isExpanded;
- (id)content;
- (void)setText:;
- (void)setContent:;
- (void).cxx_destruct;
- (void)setTextLabel:;
@end
