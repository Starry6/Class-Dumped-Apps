@interface AWEQuickShareSnackBarCustomView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) ACCAnimatedButton editButton;
@property (nonatomic) AWEQuickShareSnackBarCustomViewContext context;
@property (nonatomic) <AWEQuickShareSnackBarCustomViewDelegate> delegate;
- (void)initSubviews;
- (id)initWithFrame:delegate:context:;
- (void)editButtonDidClick;
- (id)delegate;
- (void)setEditButton:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void)setContext:;
- (id)editButton;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)layoutSubviews;
- (id)context;
- (void)setIconImageView:;
@end
