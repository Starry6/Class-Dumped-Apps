@interface AWEMVChannelPlayerCardLikeCountElement : AWEMVChannelPlayerCardBaseElement
@property (nonatomic) UIImageView likeIcon;
@property (nonatomic) UILabel likeCountLabel;
- (void)bindObserver;
- (id)likeCountLabel;
- (void)onAwemeDiggNotification:;
- (id)likeIcon;
- (void)setLikeCountLabel:;
- (void)setLikeIcon:;
- (void)updateState:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
@end
