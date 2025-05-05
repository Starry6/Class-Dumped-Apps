@interface IESECSliceSpecEnumView : IESECSliceXViewElementView
@property (nonatomic) double contentWith;
- (void)setContentWith:;
- (double)contentWith;
- (BOOL)updateWithSliceXElement:error:;
- (void)layoutSubviews;
@end
