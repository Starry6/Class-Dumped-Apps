@interface APayH5WapViewToolbar : UIView
@property (nonatomic) @? shutDownBlock;
@property (nonatomic) @? refreshBlock;
@property (nonatomic) UIImageView bgImageView;
@property (nonatomic) UIButton refreshButton;
@property (nonatomic) UIButton shutDownButton;
- (id)initWithFrame:bundleName:;
- (void)setShutDown:refresh:;
- (void)setShutDownBlock:;
- (void)setShutDownButton:;
- (id)shutDownBlock;
- (id)shutDownButton;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)shutDown:;
- (id)imageNamed:inBundle:;
- (void)refresh:;
- (void)setBgImageView:;
- (id)bgImageView;
- (id)refreshButton;
- (void)setRefreshButton:;
- (void)setRefreshBlock:;
- (id)refreshBlock;
@end
