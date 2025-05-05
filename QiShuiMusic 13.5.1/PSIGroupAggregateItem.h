@interface PSIGroupAggregateItem : NSObject
@property (nonatomic) PSIQueryToken searchToken;
@property (nonatomic) NSValue rangeMatchingToken;
@property (nonatomic) PSIGroup group;
@property (nonatomic) NSArray assetIds;
@property (nonatomic) NSArray collectionIds;
- (void)setGroup:;
- (id)group;
- (void).cxx_destruct;
- (void)reset;
- (id)assetIds;
- (id)searchToken;
- (id)collectionIds;
- (void)setCollectionIds:;
- (void)setAssetIds:;
- (void)setSearchToken:;
- (id)rangeMatchingToken;
- (void)setRangeMatchingToken:;
@end
