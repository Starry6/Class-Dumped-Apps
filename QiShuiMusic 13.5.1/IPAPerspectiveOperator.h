@interface IPAPerspectiveOperator : IPAGeometryOperator
- (id)description;
- (id)transformForGeometry:;
+ (id)operatorWithAngleX:Y:dx:dy:;
+ (id)operatorWithIdentifier:angleX:Y:dx:dy:;
@end
