@interface AVAssetTrackGroup : NSObject
@property (nonatomic) NSArray trackIDs;
- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (id)trackIDs;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithAsset:trackIDs:;
- (id)_assetComparisonToken;
@end
