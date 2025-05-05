@interface IESECGoodsInternalFeedCustomNavigationBar : UIView
@property (nonatomic) UIButton closeButton;
@property (nonatomic) @? closeButtonDidTap;
@property (nonatomic) @? searchButtonDidTap;
@property (nonatomic) @? mallEntranceDidTap;
@property (nonatomic) @? eventTrack;
@property (nonatomic) BOOL shouldShowMallEntrance;
- (void)closeButtonDidClick:;
- (id)closeButtonDidTap;
- (id)eventTrack;
- (void)mallEntranceDidClick:;
- (id)mallEntranceDidTap;
- (id)searchButtonDidTap;
- (void)setCloseButtonDidTap:;
- (void)setEventTrack:;
- (void)setMallEntranceDidTap:;
- (void)setSearchButtonDidTap:;
- (void)setShouldShowMallEntrance:;
- (BOOL)shouldShowMallEntrance;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:;
@end
