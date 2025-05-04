@interface AWEMusicPerformanceGalleryCell : UICollectionViewCell
@property (nonatomic) AWEMusicPerformanceCardView cardView;
@property (nonatomic) AWEMusicPerformanceModel performanceModel;
- (id)performanceModel;
- (void)setPerformanceModel:;
- (void)updateWithPerformanceModel:shouldHintMore:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)cardView;
- (void)setCardView:;
@end
