@interface IESECLiveEnterRoomResponseRoomInfo : MTLModel
@property (nonatomic) NSArray ecomLinkMicRoomIDS;
@property (nonatomic) NSArray ecomLinkMicPopRooms;
@property (nonatomic) NSDictionary trackEventParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ecomLinkMicPopRooms;
- (id)ecomLinkMicRoomIDS;
- (void)setEcomLinkMicPopRooms:;
- (void)setEcomLinkMicRoomIDS:;
- (void)setTrackEventParams:;
- (id)trackEventParams;
- (void).cxx_destruct;
+ (id)ecomLinkMicPopRoomsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
