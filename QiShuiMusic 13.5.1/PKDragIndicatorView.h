@interface PKDragIndicatorView : UIView
@property (nonatomic) Q edgeLocation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) double scalingFactor;
- (id)init;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (double)scalingFactor;
- (void)setScalingFactor:;
- (unsigned long long)edgeLocation;
- (void)setEdgeLocation:;
@end
