@interface AWEFeedRVSingleCardPlayElement : AWEFeedRVSingleCardBaseElement
@property (nonatomic) UIButton playButton;
- (void)initializeElement;
- (void)bindEvent;
- (void)onPlayAction:;
- (void)unSelected;
- (void)updatePlayButtonState:;
- (double)playImageHW;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
- (id)playButton;
- (void)setPlayButton:;
@end
