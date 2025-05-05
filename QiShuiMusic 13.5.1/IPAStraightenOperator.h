@interface IPAStraightenOperator : IPAGeometryOperator
- (id)description;
- (id)transformForGeometry:;
+ (id)operatorWithAngleZ:;
+ (id)operatorWithIdentifier:angleZ:;
@end
