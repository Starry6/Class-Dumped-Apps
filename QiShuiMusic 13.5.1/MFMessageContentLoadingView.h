@interface MFMessageContentLoadingView : UIView
@property (nonatomic) UIActivityIndicatorView activityIndicatorView;
@property (nonatomic) UILabel loadingLabel;
@property (nonatomic) BOOL loadingIndicatorVisible;
@property (nonatomic) NSString loadingTitle;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:;
- (id)loadingLabel;
- (void)setLoadingIndicatorVisible:;
- (void)setLoadingTitle:;
- (BOOL)isLoadingIndicatorVisible;
- (void)setLoadingIndicatorVisible:animated:;
- (id)loadingTitle;
- (void)setLoadingLabel:;
@end
