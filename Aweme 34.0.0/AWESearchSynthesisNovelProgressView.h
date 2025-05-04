@interface AWESearchSynthesisNovelProgressView : UIView
@property (nonatomic) UIButton leftButton;
@property (nonatomic) UIButton rightButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWESearchSynthesisNovelBookSettingConfig configData;
@property (nonatomic) <AWESearchSynthesisNovelProgressViewDelegate> delegate;
@property (nonatomic) q curChapterId;
- (void)updateWithConfigData:;
- (void)setConfigData:;
- (void)setCurChapterId:;
- (long long)curChapterId;
- (void)onLastChapterButtonClick:;
- (void)onNextChapterButtonClick:;
- (void)updateTitle:withChapterId:;
- (void)onBookInsertedViewBackgroundConfigChange:;
- (void)setLeftButton:;
- (void)setRightButton:;
- (id)delegate;
- (id)leftButton;
- (id)initWithFrame:;
- (id)rightButton;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)layoutSubviews;
- (id)configData;
@end
