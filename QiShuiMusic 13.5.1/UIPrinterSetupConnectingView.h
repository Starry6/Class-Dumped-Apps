@interface UIPrinterSetupConnectingView : UIView
@property (nonatomic) UILabel label;
@property (nonatomic) UIActivityIndicatorView activityIndicator;
@property (nonatomic) double presentationTime;
- (void)layoutSubviews;
- (id)activityIndicator;
- (void)setLabel:;
- (void)setActivityIndicator:;
- (id)label;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)willMoveToSuperview:;
- (double)presentationTime;
- (void)setPresentationTime:;
- (void)presentView;
- (void)setMessage:active:;
@end
