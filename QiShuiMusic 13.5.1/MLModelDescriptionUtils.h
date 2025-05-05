@interface MLModelDescriptionUtils : NSObject
+ (void)copyFeatureDescriptionFrom:to:error:;
+ (BOOL)saveModelDescription:toSpecification:error:;
+ (id)getSequenceFeatureTypeFromConstraint:error:;
+ (BOOL)validateAllFeatureDescriptions:hasAnyFeatureTypeIn:minimalCount:maximumCount:debugLabel:error:;
+ (id)createFeatureTypeFromFeatureDescription:error:;
+ (id)getArrayFeatureTypeFromConstraint:;
+ (id)createModelDescription:error:;
+ (id)createMetaData:;
+ (id)getDictionaryFeatureTypeFromConstraint:error:;
+ (id)getImageFeatureTypeFromConstraint:;
@end
