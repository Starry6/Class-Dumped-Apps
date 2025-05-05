@interface IPAOrientationOperator : IPAGeometryOperator
- (id)description;
- (id)transformForGeometry:;
+ (id)operatorWithOrientation:;
+ (id)operatorWithIdentifier:orientation:;
@end
