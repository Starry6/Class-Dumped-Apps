@interface PFCameraAdjustmentsSerialization : NSObject
+ (Class)unarchiver:cannotDecodeObjectOfClassName:originalClasses:;
+ (BOOL)deserializeDictionary:toFilters:portraitMetadata:error:;
+ (id)deserializedAdjustmentsFromData:error:;
+ (id)serializedAdjustments:error:;
+ (id)serializedDictionaryForFilters:portraitMetadata:error:;
+ (id)_errorWithMessage:code:;
@end
