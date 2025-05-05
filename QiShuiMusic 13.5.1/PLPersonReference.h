@interface PLPersonReference : PLManagedObject
@property (nonatomic) NSString personUUID;
@property (nonatomic) NSData personData;
@property (nonatomic) PLAdditionalAssetAttributes assetAttributes;
@property (nonatomic) PLPerson person;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:personUUID:personData:;
@end
