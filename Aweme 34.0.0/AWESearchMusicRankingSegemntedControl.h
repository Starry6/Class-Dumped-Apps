@interface AWESearchMusicRankingSegemntedControl : UIView
@property (nonatomic) @? segmentWillSelected;
@property (nonatomic) @? segmentDidSelected;
@property (nonatomic) NSMutableArray segmentBtns;
@property (nonatomic) q currentSelected;
- (void)setCurrentSelected:;
- (long long)currentSelected;
- (void)setSegmentWillSelected:;
- (void)setSegmentDidSelected:;
- (void)configSegment:selectedIndex:;
- (void)setSegmentBtns:;
- (void)segmentBtnAction:;
- (id)segmentBtns;
- (void)selectedSegment:isConfig:;
- (id)segmentWillSelected;
- (id)segmentDidSelected;
- (void).cxx_destruct;
@end
