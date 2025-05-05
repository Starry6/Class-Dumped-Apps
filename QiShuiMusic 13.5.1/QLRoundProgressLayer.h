@interface QLRoundProgressLayer : CALayer
@property (nonatomic) double progress;
- (id)initWithLayer:;
- (BOOL)needsDisplayOnBoundsChange;
+ (BOOL)needsDisplayForKey:;
@end
