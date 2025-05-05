@interface MPStoreItemImportTrackData : ML3StoreItemTrackData
@property (nonatomic) NSArray importElements;
- (void).cxx_destruct;
- (id)parsedStoreItemsImportProperties;
- (id)initWithImportElements:;
- (id)_associatedElementForPropertyDict:;
- (id)importElements;
+ (id)_importPropertiesDictFromImportMetadataDict:;
@end
