@interface IESIMOneDayUserStoryLiveModel : IESIMBaseApiModel
@property (nonatomic) NSNumber roomID;
@property (nonatomic) IESIMUserModel owner;
@property (nonatomic) q roomOrderType;
- (long long)roomOrderType;
- (void)setRoomOrderType:;
- (void)setOwner:;
- (id)owner;
- (void).cxx_destruct;
- (id)roomID;
- (void)setRoomID:;
+ (id)ownerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
