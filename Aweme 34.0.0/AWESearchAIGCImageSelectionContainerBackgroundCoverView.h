@interface AWESearchAIGCImageSelectionContainerBackgroundCoverView : UIView
@property (nonatomic) UIColor fillColor;
@property (nonatomic) NSArray framesToCutOut;
@property (nonatomic) BOOL isSmallType;
- (id)framesToCutOut;
- (void)setFramesToCutOut:;
- (void)setIsSmallType:;
- (BOOL)isSmallType;
- (void)setFillColor:;
- (id)fillColor;
- (void)drawRect:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
