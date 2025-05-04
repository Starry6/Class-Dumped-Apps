@interface AWEPublishVideoSyncTableViewCell : AWENewPublishTableCell
@property (nonatomic) UIStackView buttonContainer;
@property (nonatomic) UIButton ulikeButton;
@property (nonatomic) UIButton xiguaButton;
@property (nonatomic) BOOL ulikeDisplayTracked;
- (id)ulikeButton;
- (id)xiguaButton;
- (void)configWithUlikeShow:ulikeSelected:xiguaShow:xiguaSelected:disable:accsessText:;
- (void)setUlikeButton:;
- (void)setXiguaButton:;
- (BOOL)ulikeDisplayTracked;
- (void)setUlikeDisplayTracked:;
- (void)updateDisableAndAllGreyStatus:;
- (id)buttonContainer;
- (id)initWithStyle:reuseIdentifier:;
- (void)setButtonContainer:;
- (void).cxx_destruct;
@end
