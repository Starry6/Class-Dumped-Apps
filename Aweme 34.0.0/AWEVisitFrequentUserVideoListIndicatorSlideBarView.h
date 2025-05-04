@interface AWEVisitFrequentUserVideoListIndicatorSlideBarView : UIView
@property (nonatomic) UIView cursorView;
@property (nonatomic) Q currentIndex;
@property (nonatomic) Q numberOfIndicator;
@property (nonatomic) AWEVisitFrequentUserVideoListIndicatorSliderConfig config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)moveIndicatorToIndex:animated:;
- (unsigned long long)numberOfIndicator;
- (void)moveIndicatorToIndex:;
- (void)setNumberOfIndicator:;
- (id)initWithSliderConfig:;
- (id)initWithFrame:sliderConfig:;
- (void)configUIComponents;
- (void)setConfig:;
- (void)setCurrentIndex:;
- (id)config;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (unsigned long long)currentIndex;
- (id)cursorView;
- (void)setCursorView:;
@end
