@interface PLAssetSearchResult : PLSearchResult
@property (nonatomic) NSArray assetUUIDs;
@property (nonatomic) NSDate sortDate;
@property (nonatomic) NSString identifier;
- (id)identifier;
- (id)sortDate;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)assetUUIDs;
- (unsigned long long)assetCount;
- (id)keyAssetUUID;
@end
