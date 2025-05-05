@interface UISwipeActionCircularButton : UISwipeActionButton
- (void)setBackgroundColor:;
- (void)layoutSubviews;
- (void)setTitle:forState:;
- (id)initWithFrame:;
+ (id)titleFont;
+ (double)defaultButtonWidth;
+ (double)maximumButtonHeight;
@end
