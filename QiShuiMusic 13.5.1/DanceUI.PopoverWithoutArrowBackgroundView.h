@interface DanceUI.PopoverWithoutArrowBackgroundView : UIPopoverBackgroundView
@property (nonatomic) Q arrowDirection;
@property (nonatomic) double arrowOffset;
- (unsigned long long)arrowDirection;
- (void)setArrowOffset:;
- (void)layoutSubviews;
- (id)initWithCoder:;
- (double)arrowOffset;
- (id)initWithFrame:;
- (void)setArrowDirection:;
+ (double)arrowHeight;
+ (id)contentViewInsets;
@end
