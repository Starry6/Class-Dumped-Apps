@interface AWERVLVVideoHallEntranceGuideElement : AWERVVideoInfoBaseElement
@property (nonatomic) AWERVLVVideoHallEntranceGuideView entranceView;
@property (nonatomic) BOOL isClose;
- (BOOL)isClose;
- (void)setIsClose:;
- (id)entranceView;
- (void)setEntranceView:;
- (BOOL)shouldShowGuide;
- (void)trackLVButtonShow;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
@end
