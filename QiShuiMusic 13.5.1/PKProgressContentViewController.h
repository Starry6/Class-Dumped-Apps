@interface PKProgressContentViewController : UIViewController
@property (nonatomic) double progress;
- (id)_contentView;
- (void)setProgress:;
- (BOOL)_canShowWhileLocked;
- (double)progress;
- (void)loadView;
- (void)viewDidLayoutSubviews;
@end
