@interface AWEPostPageHotSpotElement : AWEPostPageCellElement
@property (nonatomic) AWENewPublishTableCell hotSpotCell;
- (void)setupCell:;
- (void)configureHotSpotCellWithInfo:;
- (void)cancelHotSpotRelate;
- (id)hotSpotCell;
- (void)hotSpotDidChangeNotification:;
- (void)newVideoPublishBroadCastNotification:;
- (void)PostVideoRelatedHotSpot:;
- (void)setHotSpotCell:;
- (void)addObserver;
- (void)viewDidLoad;
- (BOOL)isVisible;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (id)cell;
- (void)didSelect;
+ (void)_aweLazyRegisterPostPage;
+ (id)type;
@end
