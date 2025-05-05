@interface MFRoundProgressView : UIView
@property (nonatomic) double progress;
- (void)recalculateIncreaseProgress:withTimeDiff:;
- (double)toRadian:;
- (void)dealloc;
- (void)_updateSubviews;
- (void)setPieRadius:;
- (void)_updateUIProgress;
- (void)resetProgress;
- (void)layoutSubviews;
- (void)setProgress:;
- (void)_displayLinkDidFire:;
- (double)progress;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)_stopDisplayLink;
- (void)_startDisplayLink;
@end
