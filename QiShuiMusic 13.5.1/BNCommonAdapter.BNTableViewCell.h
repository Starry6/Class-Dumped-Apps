@interface BNCommonAdapter.BNTableViewCell : DJTableViewVMCell
- (void)cellDidDisappear;
- (void)cellWillAppear;
- (id)initWithStyle:reuseIdentifier:;
- (id)initWithCoder:;
- (void)setHighlighted:animated:;
@end
