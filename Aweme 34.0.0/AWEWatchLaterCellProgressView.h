@interface AWEWatchLaterCellProgressView : UIView
@property (nonatomic) UIView progressView;
@property (nonatomic) double preferedWidth;
- (void)updatePlayProgress:;
- (void)setPreferedWidth:;
- (double)preferedWidth;
- (id)init;
- (id)progressView;
- (void)setProgressView:;
- (void).cxx_destruct;
- (void)setupUI;
@end
