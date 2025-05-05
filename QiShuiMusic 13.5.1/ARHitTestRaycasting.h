@interface ARHitTestRaycasting : NSObject
+ (id)convertHitTestResult:resultType:origin:referenceOriginTransform:;
+ (unsigned int)fillPointCloud:cloudFeatures:vergenceAngleCosines:cloudWorldPoints:pointsWorld:covariancesWorld:wideToJasperTransform:;
+ (id)hitTestFromOrigin:resultType:origin:withDirection:referenceOriginTransform:;
@end
