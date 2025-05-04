@interface AWELiveShowPanelViewController : UIViewController
@property (nonatomic) BOOL isNotFirst;
@property (nonatomic) NSString videoId;
- (BOOL)isNotFirst;
- (void)setIsNotFirst:;
- (id)initWithVideoId:;
- (void)setVideoId:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)videoId;
@end
