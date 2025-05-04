@interface AWERelatedVideoPlayTVScreenElement : AWERelatedVideoPlayBaseElement
@property (nonatomic) UIButton tvButton;
@property (nonatomic) BOOL hidden;
- (void)initializeElement;
- (void)setHide:;
- (void)setAppear:;
- (void)bindEvent;
- (id)tvButton;
- (void)setTvButton:;
- (BOOL)shouldAppear;
- (void)viewDidLoad;
- (void)setData:;
- (void)setHidden:;
- (void).cxx_destruct;
- (BOOL)hidden;
@end
