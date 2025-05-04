@interface AWEAdChallengeRoomModel : MTLModel
@property (nonatomic) NSString roomID;
@property (nonatomic) NSString packedRoomData;
@property (nonatomic) HTSLiveRoom roomDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRoomDict:;
- (id)packedRoomData;
- (id)roomDict;
- (void)setPackedRoomData:;
- (id)roomID;
- (void).cxx_destruct;
- (void)setRoomID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
