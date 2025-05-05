@interface SCNAssetCatalogCacheEntry : NSObject
@property (nonatomic) @ item;
@property (nonatomic) double timestamp;
- (id)item;
- (void)dealloc;
- (void)setItem:;
- (void)setTimestamp:;
- (double)timestamp;
@end
