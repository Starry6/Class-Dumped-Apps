@interface AWEVideoBackupPopupView : UIView
@property (nonatomic) UIView bgMaskView;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel hintLabel;
@property (nonatomic) AWEAnimatedButton confirmButton;
@property (nonatomic) AWEAnimatedButton cancelButton;
@property (nonatomic) UIView horizontalLine;
@property (nonatomic) UIView verticalLine;
@property (nonatomic) @? confirmAction;
@property (nonatomic) @? cancelAction;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)didClickConfirmButton:;
- (id)verticalLine;
- (void)setHorizontalLine:;
- (void)setVerticalLine:;
- (id)bgMaskView;
- (void)setBgMaskView:;
- (void)didClickCancelButton:;
- (void)setupCover:;
- (BOOL)isStyleOne;
- (void)setCancelButton:;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void)didMoveToSuperview;
- (id)cancelButton;
- (void).cxx_destruct;
- (void)setCancelAction:;
- (id)titleLabel;
- (id)cancelAction;
- (id)confirmAction;
- (id)confirmButton;
- (void)setConfirmAction:;
- (void)setConfirmButton:;
- (id)hintLabel;
- (void)setHintLabel:;
- (id)horizontalLine;
@end
