@interface AWESearchActivityModel : AWEBaseApiModel
@property (nonatomic) AWEGeneralActivityModel activityModel;
@property (nonatomic) NSArray liveRooms;
@property (nonatomic) Q activityType;
@property (nonatomic) BOOL isLandscaped;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:;
- (id)liveRoomModel;
- (id)activityModel;
- (void)setActivityModel:;
- (id)liveRooms;
- (BOOL)isLandscaped;
- (void)setLiveRooms:;
- (void)setIsLandscaped:;
- (void)setActivityType:;
- (unsigned long long)activityType;
- (void).cxx_destruct;
+ (id)activityModelJSONTransformer;
+ (id)liveRoomsJSONTransformer;
+ (id)liveRoomModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
