@interface AWELandscapeTitleTagElement : AWELandscapeInteractionBaseElement
@property (nonatomic) UIView tagContainerView;
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) BOOL hasTrackShowPaidTag;
@property (nonatomic) BOOL hasTrackShowHasUnlockedTag;
- (id)tagLabel;
- (void)setTagLabel:;
- (id)tagContainerView;
- (void)setTagContainerView:;
- (void)trackShowHasPaidTagIfNeeded;
- (void)trackShowHasUnlockedTagIfNeeded;
- (BOOL)hasTrackShowPaidTag;
- (void)setHasTrackShowPaidTag:;
- (BOOL)hasTrackShowHasUnlockedTag;
- (void)setHasTrackShowHasUnlockedTag:;
- (void)updateState:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
@end
