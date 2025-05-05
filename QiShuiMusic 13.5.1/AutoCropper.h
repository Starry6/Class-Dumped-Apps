@interface AutoCropper : NSObject
@property (nonatomic) BOOL shouldFavorBottom;
@property (nonatomic) BOOL shouldFavorTop;
@property (nonatomic) {CGSize=dd} originalImageSize;
- (id)init;
- (id)originalImageSize;
- (void)setOriginalImageSize:;
- (id)scaleRect:byScale:;
- (id)expandRect:toContainRect:;
- (id)computeClippingWithinSize:andImportantRect:;
- (int)getRatioOfSize:;
- (id)scaleRect:toFitSize:withAnchorPoint:;
- (id)rectWithSize:andPoint:inPosition:fromOriginalSize:;
- (id)rectContainingRect:andOtherRect:;
- (id)clusterRects:;
- (id)computeClippingWithinSize:andImportantRects:;
- (int)determineBestPositionWithinSize:forImportantRect:restrictRect:;
- (id)computeClippingWithinSize:forImportantRect:andType:restrictRect:;
- (id)computeClippingWithinSize:forMultipleRects:;
- (BOOL)shouldFavorTop;
- (void)setShouldFavorTop:;
- (BOOL)shouldFavorBottom;
- (void)setShouldFavorBottom:;
@end
