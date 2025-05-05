@interface IPAScaleOperator : IPAGeometryOperator
- (id)description;
- (id)transformForGeometry:;
+ (id)operatorWithScaleX:Y:;
+ (id)operatorWithIdentifier:scaleX:Y:;
@end
