@interface MLModelIOUtils : NSObject
+ (id)deserializeVersionInfoFromArchive:error:;
+ (id)inputDescriptionFromInterface:;
+ (id)serializeSpecification:toArchive:error:;
+ (BOOL)deserializeInterfaceFormat:archive:error:;
+ (id)populateConstraintsForImageFeatureDescriptionElement:;
+ (BOOL)serializeMetadataAndInterfaceFromSpecification:archive:error:;
+ (id)outputDescriptionFromInterface:;
+ (id)specificationURLFromModelAtURL:error:;
+ (BOOL)serializeInterfaceFormat:archive:error:;
+ (id)populateConstraintsForImageFeatureDescription:;
+ (id)deserializeMetadataAndInterfaceFromArchive:error:;
+ (BOOL)serializeVersionInfo:archive:error:;
+ (id)descriptionFromProto:;
+ (id)loadFromModelSpecificationInArchive:withClass:versionInfo:configuration:error:;
+ (id)rangeFromAllowedSizeRangeProtoMessage:;
+ (id)populateConstraintsForFeatureDescription:;
+ (id)versionForSerializedSpecification:options:error:;
+ (id)orderedNamesFromProto:;
+ (id)orderedFeatureNamesFromInterface:forInput:;
+ (id)trainingInputDescriptionFromInterface:;
@end
