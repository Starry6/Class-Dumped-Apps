@interface IESECCommentEmptyPageView : UIView
@property (nonatomic) IESECUIImageView emptyImageView;
@property (nonatomic) UILabel errorHintLabel;
@property (nonatomic) IESECUIButton retryButton;
@property (nonatomic) <IESECCommentEmptyPageViewProtocol> delegate;
- (id)emptyImageView;
- (id)errorHintLabel;
- (void)retryButtonClicked;
- (void)setEmptyImageView:;
- (void)setErrorHintLabel:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setupUI;
- (id)retryButton;
- (void)setRetryButton:;
@end
