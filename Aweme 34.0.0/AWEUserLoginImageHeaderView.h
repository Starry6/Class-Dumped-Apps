@interface AWEUserLoginImageHeaderView : UIView
@property (nonatomic) UIImageView contentImageView;
@property (nonatomic) UIView translucentView;
@property (nonatomic) NSString headURL;
- (id)headURL;
- (void)setHeadURL:;
- (id)initWithHeadURL:;
- (void)setupContentImageView;
- (void)setTranslucentView:;
- (id)translucentView;
- (void).cxx_destruct;
- (void)setupUI;
- (id)contentImageView;
- (void)setContentImageView:;
@end
