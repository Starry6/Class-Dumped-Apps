@interface AWESearchRelatedLiveResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray rooms;
@property (nonatomic) q offset;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q backupOffset;
@property (nonatomic) NSString queryID;
@property (nonatomic) NSString searchID;
- (long long)backupOffset;
- (void)setBackupOffset:;
- (id)rooms;
- (void)setOffset:;
- (long long)offset;
- (void)setHasMore:;
- (void)setQueryID:;
- (BOOL)hasMore;
- (id)queryID;
- (void).cxx_destruct;
- (id)searchID;
- (void)setSearchID:;
- (void)setRooms:;
+ (id)roomsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
