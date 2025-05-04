@interface AWEIMIncentivePushGuideView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWEButton confirmButton;
@property (nonatomic) AWEButton closeButton;
@property (nonatomic) @? didClickConfirmBtnBlock;
@property (nonatomic) @? didClickCloseBtnBlock;
- (void)setupUIWithConfig:;
- (void)updateWithChatHasBackground:;
- (void)setDidClickConfirmBtnBlock:;
- (void)setDidClickCloseBtnBlock:;
- (void)addBannerSubviews;
- (void)didTapConfirmButton:;
- (id)didClickConfirmBtnBlock;
- (id)didClickCloseBtnBlock;
- (id)initWithConfig:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setupConstraints;
- (id)titleLabel;
- (id)confirmButton;
- (void)setConfirmButton:;
- (void)setCloseButton:;
- (id)closeButton;
- (void)didTapCloseButton:;
@end
