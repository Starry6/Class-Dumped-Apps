@interface AWESearchRelatedLiveRoom : AWEBaseApiModel
@property (nonatomic) NSNumber roomID;
@property (nonatomic) NSString title;
@property (nonatomic) q userCount;
@property (nonatomic) AWEUserModel owner;
@property (nonatomic) AWEURLModel roomCoverURL;
@property (nonatomic) NSNumber ownerUserID;
- (id)roomCoverURL;
- (void)setRoomCoverURL:;
- (id)roomID;
- (void)setOwner:;
- (id)owner;
- (void).cxx_destruct;
- (id)title;
- (void)setRoomID:;
- (void)setTitle:;
- (void)setUserCount:;
- (long long)userCount;
- (void)setOwnerUserID:;
- (id)ownerUserID;
+ (id)ownerJSONTransformer;
+ (id)roomCoverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
