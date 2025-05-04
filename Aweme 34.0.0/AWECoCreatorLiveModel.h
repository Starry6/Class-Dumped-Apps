@interface AWECoCreatorLiveModel : MTLModel
@property (nonatomic) NSNumber roomID;
@property (nonatomic) q liveStatus;
@property (nonatomic) NSString roomData;
@property (nonatomic) NSDictionary roomDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)roomData;
- (void)setRoomData:;
- (void)setRoomDict:;
- (id)roomDict;
- (void)setLiveStatus:;
- (id)roomID;
- (void).cxx_destruct;
- (void)setRoomID:;
- (long long)liveStatus;
+ (id)roomDictJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
