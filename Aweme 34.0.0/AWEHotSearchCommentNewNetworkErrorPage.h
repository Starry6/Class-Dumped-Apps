@interface AWEHotSearchCommentNewNetworkErrorPage : UIView
@property (nonatomic) DUXBaseImageView offlineImageView;
@property (nonatomic) DUXBaseLabel errorLabel;
@property (nonatomic) DUXBaseLabel hintLabel;
@property (nonatomic) DUXBaseButton refreshButton;
@property (nonatomic) @? refreshBlock;
- (void)makeConstraint;
- (id)offlineImageView;
- (void)refreshButtonClicked;
- (void)setOfflineImageView:;
- (id)init;
- (void).cxx_destruct;
- (void)setupUI;
- (id)hintLabel;
- (void)setHintLabel:;
- (id)refreshButton;
- (void)setRefreshButton:;
- (id)errorLabel;
- (void)setErrorLabel:;
- (id)refreshBlock;
- (void)setRefreshBlock:;
@end
