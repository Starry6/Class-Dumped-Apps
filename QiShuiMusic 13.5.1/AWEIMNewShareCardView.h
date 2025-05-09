@interface AWEIMNewShareCardView : UIView
@property (nonatomic) UIStackView topStackView;
@property (nonatomic) AWEIMRefreshImageView avatarView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton rightButton;
@property (nonatomic) BOOL chatListHasBackgroundImg;
@property (nonatomic) UIStackView bottomStackView;
@property (nonatomic) NSArray bottomImageViews;
- (id)bottomImageViews;
- (BOOL)chatListHasBackgroundImg;
- (void)p_chatBackgroundDidChangeNty:;
- (void)p_constraintSubviews;
- (void)p_initSubviews;
- (void)setAvatarURLModel:;
- (void)setBottomImageViews:;
- (void)setChatListHasBackgroundImg:;
- (void)setCoverURLModelArray:;
- (void)dealloc;
- (void)setTitleLabel:;
- (id)avatarView;
- (void)setAvatarView:;
- (id)rightButton;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setRightButton:;
- (id)titleLabel;
- (id)bottomStackView;
- (void)setBottomStackView:;
- (id)topStackView;
- (void)setTopStackView:;
+ (id)p_imageViewCreatorWithStackView:;
@end
