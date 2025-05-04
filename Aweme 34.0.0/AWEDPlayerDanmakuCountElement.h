@interface AWEDPlayerDanmakuCountElement : AWEDPlayerInteractionBaseElement
@property (nonatomic) UIImageView danmakuIcon;
@property (nonatomic) UILabel countLabel;
- (id)activateInfoWithData:;
- (id)danmakuIcon;
- (id)formateCount:;
- (void)setDanmakuIcon:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
- (id)countLabel;
- (void)setCountLabel:;
@end
