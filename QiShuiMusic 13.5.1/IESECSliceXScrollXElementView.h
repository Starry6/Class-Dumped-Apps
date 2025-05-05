@interface IESECSliceXScrollXElementView : IESECSliceXScrollElementView
@property (nonatomic) q index;
- (BOOL)updateWithSliceXElement:error:;
- (void)layoutSubviews;
- (long long)index;
- (id)initWithContext:;
- (void)setIndex:;
@end
