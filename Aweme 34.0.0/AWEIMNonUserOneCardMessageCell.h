@interface AWEIMNonUserOneCardMessageCell : AWEIMSystemMessageTableViewCell
@property (nonatomic) UIView bgView;
@property (nonatomic) UIView oneCardView;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) NSTimer timer;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)configWithMessage:;
- (id)oneCardView;
- (void)__hidenCoverImageViewWithAnimation:;
- (void)__cancelTimer;
- (void)__loadOneCardView;
- (void)__loadCoverImageView;
- (void)setOneCardView:;
- (void)__didEndDisplayingWithTimer:;
- (void)setTimer:;
- (id)timer;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)bgView;
- (void)setBgView:;
- (void)setupUI;
- (void)didEndDisplaying;
+ (id)contentSizeWithMesasge:;
+ (id)identifier;
@end
