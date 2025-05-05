@interface PSITopAssetsResult : NSObject
@property (nonatomic) r^{__CFArray=} assetIds;
@property (nonatomic) <PSITopAssetsResultDelegate> delegate;
@property (nonatomic) Q assetMatchCount;
@property (nonatomic) NSArray assetUUIDs;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)assetUUIDs;
- (id)assetIds;
- (id)copyWithZone:;
- (unsigned long long)assetMatchCount;
- (void)fetchAssetUUIDsWithCompletionHandler:;
- (void)setAssetIds:;
@end
