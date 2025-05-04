@interface AWERatingStarView : UIView
@property (nonatomic) double index;
@property (nonatomic) <AWERatingStartViewDelegate> delegate;
- (void)onTaped:;
- (id)initWithFrame:index:;
- (void)setIndex:;
- (double)index;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (id)createStarLayerWithImgae:size:;
+ (id)createLayer:;
+ (id)createStarWithImage:size:index:;
+ (id)createStarWithImage:size:index:color:gridentLayer:;
+ (id)createPartialStarWithFillPercentage:fullImage:emptyImage:size:index:;
@end
