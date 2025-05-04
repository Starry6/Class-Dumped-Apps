@interface AWEGrouponC2FeedLargeCardCell : AWEGrouponC2BaseFeedCell
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didClick;
- (void)endDisplay;
- (void)configCellWithModel:withIndex:cellWidth:pageContext:;
- (void)onClickWithModel:;
- (void)willDisplayWhenDidAppear;
- (void)resetChildViewController;
- (void)addChildVCWithCellWidth:;
- (void)prepareForReuse;
- (id)initWithFrame:;
+ (id)calculateCellSizeWithWidth:model:;
@end
