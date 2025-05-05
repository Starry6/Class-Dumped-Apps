@interface IESLiveVSScreenRecordBar : UIView
@property (nonatomic) IESLiveRoundProgressView progressView;
@property (nonatomic) UIImageView redSquareView;
@property (nonatomic) UILabel recordDurationLabel;
@property (nonatomic) @? stopRecordAction;
- (void)onStopScreenRecordAction:;
- (id)recordDurationLabel;
- (id)redSquareView;
- (void)setRecordDurationLabel:;
- (void)setRedSquareView:;
- (void)setStopRecordAction:;
- (id)stopRecordAction;
- (void)updateWithDuration:;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setProgressView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)progressView;
- (void)setupViews;
@end
