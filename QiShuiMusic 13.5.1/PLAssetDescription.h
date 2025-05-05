@interface PLAssetDescription : PLManagedObject
@property (nonatomic) NSString longDescription;
@property (nonatomic) PLAdditionalAssetAttributes assetAttributes;
- (id)payloadID;
- (BOOL)isSyncableChange;
- (void)willSave;
- (id)payloadForChangedKeys:;
- (void)prepareForDeletion;
- (id)duplicateSortPropertyNamesSkip;
- (id)duplicateSortPropertyNames;
+ (id)entityName;
+ (id)listOfSyncedProperties;
@end
