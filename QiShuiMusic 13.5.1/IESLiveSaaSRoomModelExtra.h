@interface IESLiveSaaSRoomModelExtra : BDDynamicMTLModel
@property (nonatomic) NSNumber xiguaUID;
@property (nonatomic) NSNumber vsMainReplayID;
@property (nonatomic) NSString vsType;
@property (nonatomic) BOOL realtimeReplayEnabled;
@property (nonatomic) q realtimePlaybackQualitiesArray_Count;
@property (nonatomic) NSArray realtimePlaybackQualitiesArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)realtimePlaybackQualitiesArray;
- (long long)realtimePlaybackQualitiesArray_Count;
- (BOOL)realtimeReplayEnabled;
- (void)setRealtimePlaybackQualitiesArray:;
- (void)setRealtimePlaybackQualitiesArray_Count:;
- (void)setRealtimeReplayEnabled:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
