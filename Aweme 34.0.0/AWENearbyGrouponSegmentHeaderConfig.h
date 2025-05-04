@interface AWENearbyGrouponSegmentHeaderConfig : NSObject
@property (nonatomic) q segmentHeaderHeight;
@property (nonatomic) q segmentViewHeight;
@property (nonatomic) q segmentViewOriginX;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) q transformerBottomInset;
- (void)setSegmentViewHeight:;
- (long long)segmentViewHeight;
- (long long)segmentViewOriginX;
- (long long)transformerBottomInset;
- (long long)segmentHeaderHeight;
- (void)updateWithHeaderSticky:;
- (void)setSegmentHeaderHeight:;
- (void)setSegmentViewOriginX:;
- (void)setTransformerBottomInset:;
- (id)init;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
@end
