@interface MPStoreItemLibraryImportElement : NSObject
@property (nonatomic) q storeItemID;
@property (nonatomic) NSDictionary additionalTrackMetadata;
- (long long)storeItemID;
- (void).cxx_destruct;
- (id)initWithStoreItemID:additionalTrackMetadata:;
- (id)storeItem;
- (id)additionalTrackMetadata;
@end
