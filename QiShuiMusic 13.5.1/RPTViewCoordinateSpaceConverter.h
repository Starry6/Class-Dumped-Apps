@interface RPTViewCoordinateSpaceConverter : RPTCoordinateSpaceConverter
@property (nonatomic) UIView view;
- (id)convertRect:;
- (id)view;
- (void).cxx_destruct;
- (void)setView:;
- (id)convertVector:;
- (id)convertSize:;
- (id)convertPoint:;
- (id)initFromView:;
@end
