@interface UISwipeActionStandardButton : UISwipeActionButton
@property (nonatomic) double extensionLength;
- (void)layoutSubviews;
- (void)setTitle:forState:;
- (id)initWithFrame:;
- (id)titleLabel;
- (double)buttonWidth;
- (double)extensionLength;
- (void)setExtensionLength:;
@end
