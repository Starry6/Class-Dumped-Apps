@interface AWEIMTableViewHeaderFooterView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView selectedBackgroundView;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) <AWEIMTableViewHeaderFooterViewDelegate> delegate;
- (void)hideSelectedBackgroundView;
- (void)delayHiddingSelectedBackgroundView;
- (void)setIsSelected:;
- (id)init;
- (id)delegate;
- (void)setup;
- (void)touchesCancelled:withEvent:;
- (id)containerView;
- (BOOL)isSelected;
- (void)setContainerView:;
- (void)touchesEnded:withEvent:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (void)setDelegate:;
- (id)selectedBackgroundView;
- (void)setSelectedBackgroundView:;
@end
