@interface IPACropOperator : IPAGeometryOperator
- (id)description;
- (id)transformForGeometry:;
+ (id)operatorWithCropRect:;
+ (id)operatorWithIdentifier:cropRect:;
@end
