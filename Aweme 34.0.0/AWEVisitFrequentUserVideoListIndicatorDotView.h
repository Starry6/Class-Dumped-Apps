@interface AWEVisitFrequentUserVideoListIndicatorDotView : UIView
@property (nonatomic) AWEVisitFrequentUserVideoListIndicatorConfig config;
@property (nonatomic) Q currentIndex;
@property (nonatomic) Q numberOfIndicator;
@property (nonatomic) NSMutableArray dotViewArray;
@property (nonatomic) UIView selectedView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSelectedView:;
- (id)initWithDotCount:dotConfig:;
- (id)dotViewArray;
- (void)moveIndicatorToIndex:animated:;
- (unsigned long long)numberOfIndicator;
- (void)moveIndicatorToIndex:;
- (void)setNumberOfIndicator:;
- (id)initWithDotCount:;
- (void)setDotViewArray:;
- (void)setConfig:;
- (void)setCurrentIndex:;
- (id)config;
- (void).cxx_destruct;
- (unsigned long long)currentIndex;
- (id)selectedView;
@end
