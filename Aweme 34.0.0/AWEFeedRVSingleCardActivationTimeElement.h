@interface AWEFeedRVSingleCardActivationTimeElement : AWEFeedRVSingleCardBaseElement
@property (nonatomic) UILabel progressTimeLeftLabelView;
@property (nonatomic) UILabel progressTimeRightLabelView;
@property (nonatomic) UILabel divideLabelView;
- (void)initializeElement;
- (void)bindEvent;
- (id)progressTimeLeftLabelView;
- (id)divideLabelView;
- (id)progressTimeRightLabelView;
- (void)setProgressTimeLeftLabelView:;
- (void)setDivideLabelView:;
- (void)setProgressTimeRightLabelView:;
- (void)updateTimeLabelWithCurrentTime:totalTime:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
@end
