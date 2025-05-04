@interface AWEFeedRelatedVideoCardInteractionButton : UIView
@property (nonatomic) UIImageView imageIcon;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) BOOL needAnimation;
@property (nonatomic) @? touchUpInsideBlock;
- (void)setTouchUpInsideBlock:;
- (void)setNeedAnimation:;
- (BOOL)needAnimation;
- (void)setImageIcon:;
- (id)imageIcon;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setUpView;
- (id)touchUpInsideBlock;
@end
