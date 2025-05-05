@interface NSLayoutPoint : NSObject
@property (nonatomic) NSLayoutXAxisAnchor xAxisAnchor;
@property (nonatomic) NSLayoutYAxisAnchor yAxisAnchor;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)ruleEqualToLayoutPoint:;
- (id)valueInItem:;
- (id)layoutPointByOffsettingWithXOffset:yOffset:;
- (id)layoutPointByOffsettingWithXOffsetDimension:yOffsetDimension:;
- (id)constraintsEqualToLayoutPoint:;
- (id)pointByOffsettingWithXOffset:yOffset:;
- (id)pointByOffsettingWithXOffsetDimension:yOffsetDimension:;
- (id)constraintsEqualToPoint:;
- (id)xAxisAnchor;
- (id)yAxisAnchor;
+ (id)layoutPointWithXAxisAnchor:yAxisAnchor:;
+ (id)pointWithXAxisAnchor:yAxisAnchor:;
@end
