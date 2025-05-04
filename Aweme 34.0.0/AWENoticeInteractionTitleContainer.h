@interface AWENoticeInteractionTitleContainer : AWENoticeInteractionBaseContainer
@property (nonatomic) AWENoticeAuthorView nameAndTitleView;
@property (nonatomic) UIView nameView;
@property (nonatomic) AWEUserNameLabel nameLabel;
- (id)nameAndTitleView;
- (void)setNameAndTitleView:;
- (void)configWithCellModel:;
- (void)updateNameLabelWithUser:;
- (void)followStatusChanged:;
- (void)handleTapNameAndTitleGesWithSender:;
- (id)createNameAndTitleView;
- (id)createNameView;
- (BOOL)isNeedUseNameAndTitleView;
- (id)nameView;
- (id)initWithFrame:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setNameView:;
- (id)initWithCoder:;
- (void)setNameLabel:;
- (id)createNameLabel;
- (void)setupUI;
- (void)configLayout;
@end
