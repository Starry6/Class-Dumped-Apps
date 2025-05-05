@interface PFCameraMetadataSerialization : NSObject
+ (id)serializedDataFromCameraClientMetadata:error:;
+ (id)serializedDataFromClientMetadata:error:;
+ (id)deserializedMetadataFromPrivateClientMetadata:error:;
+ (id)serializedDataFromClientMetadata:contactIDsInProximity:sharedLibraryMode:error:;
+ (id)deserializedMetadataFromData:error:;
+ (id)deserializedMetadataFromCameraClientMetadata:error:;
@end
