@interface AWEIMGroupDetailShareCell : UITableViewCell
@property (nonatomic) UIButton shareButton;
@property (nonatomic) @? shareBlock;
- (void)updateBtnTitle:;
- (void)sahreButtonTapped:;
- (void)setShareBlock:;
- (id)shareBlock;
- (id)init;
- (void).cxx_destruct;
- (void)setupUI;
- (id)shareButton;
- (void)setShareButton:;
@end
