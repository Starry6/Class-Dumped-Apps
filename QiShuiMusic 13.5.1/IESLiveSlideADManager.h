@interface IESLiveSlideADManager : NSObject
@property (nonatomic) NSMutableDictionary adRoomsInfo;
@property (nonatomic) NSMutableDictionary shownRoomsTimestamp;
@property (nonatomic) NSMutableArray shortShowAdRooms;
@property (nonatomic) double allEcpm;
@property (nonatomic) NSMutableSet ecpmCountRooms;
- (double)allEcpm;
- (void)setAdRoomsInfo:;
- (id)adExtraParam;
- (id)adRoomsInfo;
- (id)cidForRoom:;
- (void)cleanAll;
- (id)ecpmCountRooms;
- (void)endShowWithLiveRoom:;
- (void)setAllEcpm:;
- (void)setEcpmCountRooms:;
- (void)setShortShowAdRooms:;
- (void)setShownRoomsTimestamp:;
- (id)shortShowAdRooms;
- (id)shownRoomsTimestamp;
- (void)startShowWithLiveRoom:;
- (void)updateWithRoom:adExtraString:;
- (void).cxx_destruct;
+ (id)shared;
@end
