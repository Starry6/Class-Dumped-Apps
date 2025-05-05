@interface NSLayoutRectangle : NSLayoutRect
@property (nonatomic) NSLayoutPoint centerPoint;
- (id)centerPoint;
- (id)rectangleByInsettingTop:leading:bottom:trailing:;
- (id)rectangleByInsettingTopByDimension:leadingByDimension:bottomByDimension:trailingByDimension:;
- (id)rectangleBySlicingWithDistance:fromEdge:;
- (id)rectangleBySlicingWithDimension:fromEdge:;
- (id)rectangleBySlicingWithProportion:fromEdge:;
- (id)constraintsEqualToRectangle:;
- (id)constraintsContainingWithinRectangle:;
- (id)rectangleWithName:;
+ (id)rectangleWithLeading:top:width:height:;
+ (id)rectangleWithLeading:top:trailing:bottom:;
+ (id)rectangleWithCenter:width:height:;
@end
