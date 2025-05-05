@interface PLCloudMasterMediaMetadata : PLManagedObject
@property (nonatomic) NSData data;
@property (nonatomic) PLCloudMaster cloudMaster;
@property (nonatomic) PLAdditionalAssetAttributes additionalAssetAttributes;
- (id)payloadID;
- (id)payloadsForChangedKeys:;
- (void)_addPayloadIfValidForAsset:changedKeys:toPayloads:modelProperties:;
+ (id)entityName;
@end
