@interface IESLiveSaaSPBRoomExtra : GPBMessage
@property (nonatomic) BOOL isSandbox;
@property (nonatomic) q xiguaUid;
@property (nonatomic) q limitStrategy;
@property (nonatomic) NSString limitAppid;
@property (nonatomic) NSInteger vrType;
@property (nonatomic) NSString createScene;
@property (nonatomic) NSInteger geoBlock;
@property (nonatomic) BOOL isVirtualAnchor;
@property (nonatomic) BOOL realtimeReplayEnabled;
@property (nonatomic) q realtimePlaybackShift;
@property (nonatomic) q realtimePlaybackStartShift;
@property (nonatomic) NSMutableArray realtimePlaybackQualitiesArray;
@property (nonatomic) Q realtimePlaybackQualitiesArray_Count;
@property (nonatomic) NSString hlsPullURLParams;
@property (nonatomic) NSMutableDictionary hlsPullURLMap;
@property (nonatomic) Q hlsPullURLMap_Count;
@property (nonatomic) NSMutableArray completePushUrlsArray;
@property (nonatomic) Q completePushUrlsArray_Count;
@property (nonatomic) NSMutableDictionary pushDatas;
@property (nonatomic) Q pushDatas_Count;
+ (id)descriptor;
@end
