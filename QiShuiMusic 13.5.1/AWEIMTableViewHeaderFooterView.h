@interface AWEIMTableViewHeaderFooterView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView selectedBackgroundView;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) <AWEIMTableViewHeaderFooterViewDelegate> delegate;
- (void)delayHiddingSelectedBackgroundView;
- (void)hideSelectedBackgroundView;
- (id)init;
- (void)touchesBegan:withEvent:;
- (id)containerView;
- (void)setContainerView:;
- (void)setDelegate:;
- (BOOL)isSelected;
- (void)setup;
- (id)delegate;
- (void).cxx_destruct;
- (void)setIsSelected:;
- (void)touchesEnded:withEvent:;
- (void)touchesCancelled:withEvent:;
- (id)selectedBackgroundView;
- (void)setSelectedBackgroundView:;
@end
