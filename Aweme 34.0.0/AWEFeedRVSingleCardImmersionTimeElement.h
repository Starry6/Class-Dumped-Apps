@interface AWEFeedRVSingleCardImmersionTimeElement : AWEFeedRVSingleCardBaseElement
@property (nonatomic) UILabel progressTimeLabelView;
- (void)initializeElement;
- (void)bindEvent;
- (void)unSelected;
- (void)updateTimeLabelWithCurrentTime:totalTime:;
- (id)progressTimeLabelView;
- (void)setProgressTimeLabelView:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
@end
