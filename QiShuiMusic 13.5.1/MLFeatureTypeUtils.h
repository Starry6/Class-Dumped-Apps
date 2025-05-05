@interface MLFeatureTypeUtils : NSObject
+ (long long)featureTypeForObject:;
+ (id)descriptionForType:;
+ (long long)featureTypeForValuesInArray:error:;
+ (BOOL)canShapeArrayBePromotedFrom:to:;
+ (id)featureValuesWithConsistentTypeFromArray:error:;
+ (id)featureDescriptionWithName:consistentWithFeatureValues:error:;
@end
