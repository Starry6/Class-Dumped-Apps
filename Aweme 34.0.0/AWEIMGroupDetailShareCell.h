@interface AWEIMGroupDetailShareCell : UITableViewCell
@property (nonatomic) UIButton shareButton;
@property (nonatomic) @? shareBlock;
- (void)setShareBlock:;
- (id)shareBlock;
- (void)sahreButtonTapped:;
- (void)updateBtnTitle:;
- (id)init;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setShareButton:;
- (id)shareButton;
@end
