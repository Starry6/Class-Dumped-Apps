@interface AWEShareReportViewController : UIViewController
@property (nonatomic) UIImageView exclamationImageView;
@property (nonatomic) NSDictionary commitParams;
@property (nonatomic) UILabel reportLabel;
@property (nonatomic) UILabel detailReportLabel;
@property (nonatomic) AWEButton makeSureReportButton;
@property (nonatomic) @? reshowCardView;
@property (nonatomic) NSDictionary reportEventDictionary;
- (void)setReportLabel:;
- (void)setReportEventDictionary:;
- (id)initWithReportParams:reportEventDictionary:reShowCardViewBlock:;
- (void)setCommitParams:;
- (void)setReshowCardView:;
- (void)navigationBarStyleSettings;
- (id)reportEventDictionary;
- (void)reshowAlert;
- (id)reshowCardView;
- (id)detailReportLabel;
- (id)makeSureReportButton;
- (id)commitParams;
- (void)makeSureChooseFinalReport;
- (void)tapToDismiss:;
- (void)setExclamationImageView:;
- (void)setDetailReportLabel:;
- (void)setMakeSureReportButton:;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)exclamationImageView;
- (void)cancelButtonClicked;
- (id)reportLabel;
@end
