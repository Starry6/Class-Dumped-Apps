@interface MPMusicPlayerStoreQueueDescriptor : MPMusicPlayerQueueDescriptor
@property (nonatomic) NSDictionary assetStoreFronts;
@property (nonatomic) NSArray storeIDs;
@property (nonatomic) NSString startItemID;
- (BOOL)isEmpty;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setStoreIDs:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)storeIDs;
- (id)copyWithZone:;
- (id)initWithStoreIDs:;
- (void)setStartTime:forItemWithStoreID:;
- (void)setEndTime:forItemWithStoreID:;
- (void)setSourceStorefront:forItemWithStoreID:;
- (id)assetStoreFronts;
- (void)setAssetStoreFronts:;
- (id)startItemID;
- (void)setStartItemID:;
+ (BOOL)supportsSecureCoding;
@end
