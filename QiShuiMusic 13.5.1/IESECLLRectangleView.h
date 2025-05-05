@interface IESECLLRectangleView : IESECLLShapeView
@property (nonatomic) {corners_radius=dddd} radius_map;
- (id)rectPathInRect:;
- (id)radius_map;
- (void)setRadius_map:;
- (void)layoutSubviews;
@end
