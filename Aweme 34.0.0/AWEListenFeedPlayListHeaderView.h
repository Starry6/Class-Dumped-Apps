@interface AWEListenFeedPlayListHeaderView : UIView
@property (nonatomic) UIView dragHandlerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWEButton closeButton;
@property (nonatomic) DUXButton playStyleButton;
- (id)playStyleButton;
- (void)setPlayStyleButton:;
- (id)dragHandlerView;
- (void)setDragHandlerView:;
- (id)init;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (void)setCloseButton:;
- (id)closeButton;
@end
