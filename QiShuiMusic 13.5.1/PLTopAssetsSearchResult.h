@interface PLTopAssetsSearchResult : NSObject
@property (nonatomic) PSITopAssetsResult topAssetsResults;
@property (nonatomic) Q assetCount;
@property (nonatomic) NSArray assetUUIDs;
- (void).cxx_destruct;
- (id)assetUUIDs;
- (unsigned long long)assetCount;
- (id)initWithTopAssetsResult:;
- (id)topAssetsResults;
@end
