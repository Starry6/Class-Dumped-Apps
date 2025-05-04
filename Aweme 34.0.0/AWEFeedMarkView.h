@interface AWEFeedMarkView : AWEMarkView
@property (nonatomic) CAShapeLayer cornerLayer;
@property (nonatomic) BOOL isVideoLayoutAdjust;
@property (nonatomic) BOOL useLayoutAlignLeft;
- (id)initWithUIConfigModel:;
- (void)setAdTagText:;
- (void)setMarkImageURLs:;
- (BOOL)isVideoLayoutAdjust;
- (id)cornerLayer;
- (void)setCornerLayer:;
- (void)setIsVideoLayoutAdjust:;
- (void)updateLayoutHasAdTag:;
- (void)setUseLayoutAlignLeft:;
- (void)adjustUIStyleWithConfigModel:HasAdTag:;
- (BOOL)useLayoutAlignLeft;
- (void)clearTopCornerRadiusIfNeeded;
- (void)adjustUIStyleWithConfigModel:HasAdTag:UseLayoutAlignLeft:;
- (void).cxx_destruct;
- (void)layoutSubviews;
@end
