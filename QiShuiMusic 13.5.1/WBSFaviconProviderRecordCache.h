@interface WBSFaviconProviderRecordCache : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)removeAllRecords;
- (id)iconInfoForURLString:;
- (void)setDateAdded:forFaviconURLString:iconUUID:iconSize:hasGeneratedResolutions:;
- (id)dateAddedForFaviconURLString:iconUUID:size:;
- (void)removeRecordForIconUUIDs:;
@end
