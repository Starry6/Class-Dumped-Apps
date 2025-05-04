@interface AWEOneDayUserStoryLiveModel : AWEBaseApiModel
@property (nonatomic) NSNumber roomID;
@property (nonatomic) AWEUserModel owner;
@property (nonatomic) q roomOrderType;
- (long long)roomOrderType;
- (void)setRoomOrderType:;
- (id)roomID;
- (void)setOwner:;
- (id)owner;
- (void).cxx_destruct;
- (void)setRoomID:;
+ (id)ownerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
