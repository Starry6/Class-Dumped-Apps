@interface IESIMLiveRoom : IESIMBaseApiModel
@property (nonatomic) NSNumber roomID;
@property (nonatomic) NSNumber userCount;
@property (nonatomic) NSNumber width;
@property (nonatomic) NSNumber height;
@property (nonatomic) BOOL isAudioLive;
@property (nonatomic) NSNumber interactiveEnabled;
@property (nonatomic) IESIMLiveNearbyTV nearbyTV;
- (void)setIsAudioLive:;
- (id)interactiveEnabled;
- (BOOL)isAudioLive;
- (id)nearbyTV;
- (void)setInteractiveEnabled:;
- (void)setWidth:;
- (id)height;
- (id)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (id)userCount;
- (void)setUserCount:;
- (id)roomID;
- (void)setRoomID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
