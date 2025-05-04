@interface AWEIMAlbumSettingNoticeView : UIView
@property (nonatomic) UIView topLine;
@property (nonatomic) UILabel label;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) @? onCloseClicked;
- (void)onLabelClicked;
- (void)onCloseBtnClicked;
- (id)onCloseClicked;
- (void)p_trackChangeAccess;
- (void)setOnCloseClicked:;
- (void)setLabel:;
- (id)init;
- (id)label;
- (void).cxx_destruct;
- (void)setupView;
- (void)setCloseButton:;
- (id)closeButton;
- (id)topLine;
- (void)setTopLine:;
@end
