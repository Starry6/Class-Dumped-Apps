@interface AWEFeedRVSingleCardBottomPlayElement : AWEFeedRVSingleCardBaseElement
@property (nonatomic) UIButton bottomPlayButton;
- (void)initializeElement;
- (void)bindEvent;
- (void)onPlayAction:;
- (void)unSelected;
- (id)bottomPlayButton;
- (void)updatePlayButtonState:;
- (void)setBottomPlayButton:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
@end
