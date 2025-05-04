@interface AWENovelReaderAlertContainerView : UIView
@property (nonatomic) AWENovelReaderAlertView alertView;
- (id)alertView;
- (id)initWithFrame:;
- (void)setAlertView:;
- (void).cxx_destruct;
- (void)layoutSubviews;
+ (void)showInVC:strategy:;
+ (void)showInVC:param:;
@end
