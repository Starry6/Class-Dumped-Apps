@interface AWEListenFeedProgressIndicator : UIView
@property (nonatomic) UILabel chapterInfoLabel;
@property (nonatomic) UILabel currentTimeLabel;
@property (nonatomic) UILabel remainTimeLabel;
@property (nonatomic) UILabel splitLine;
- (id)splitLine;
- (void)setSplitLine:;
- (id)chapterInfoLabel;
- (id)remainTimeLabel;
- (void)updateIndicatorWithChapterInfo:currentTime:remainTime:;
- (void)setChapterInfoLabel:;
- (void)setRemainTimeLabel:;
- (id)init;
- (id)currentTimeLabel;
- (void)setCurrentTimeLabel:;
- (void).cxx_destruct;
- (void)setupUI;
@end
