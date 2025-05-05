@interface IESLiveSaaSECRoomService : NSObject
@property (nonatomic) IESLiveSaaSLiveRoomModel roomModel;
@property (nonatomic) Q currentRoomType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)ecommerceAuth;
- (id)followStatus;
- (BOOL)isD3Room;
- (BOOL)isVSRoom;
- (BOOL)isVerticalVSRoom;
- (id)roomModel;
- (unsigned long long)roomType;
- (id)secAuthorID;
- (void)setRoomModel:;
- (void)setupRoomModel:roomType:;
- (id)groupID;
- (id)owner;
- (long long)scene;
- (void).cxx_destruct;
- (id)roomID;
- (unsigned long long)currentRoomType;
- (void)setCurrentRoomType:;
- (id)authorID;
- (id)episodeID;
+ (id)serviceOf:;
@end
